#! /bin/bash -x
#* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
#*                                                                           *
#*                  This file is part of the program and library             *
#*         SCIP --- Solving Constraint Integer Programs                      *
#*                                                                           *
#*    Copyright (C) 2002-2020 Konrad-Zuse-Zentrum                            *
#*                            fuer Informationstechnik Berlin                *
#*                                                                           *
#*  SCIP is distributed under the terms of the ZIB Academic License.         *
#*                                                                           *
#*  You should have received a copy of the ZIB Academic License              *
#*  along with SCIP; see the file COPYING. If not email to scip@zib.de.      *
#*                                                                           *
#* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

# Usage:
# make testcluster | TESTSET=testset SETTINGS=setting PERMUTE=permutations EXECUTABLE=build/bin/scip PERFORMANCE=performance check/jenkins_check_results_cmake.sh
# or export the above mentioned variables and simply run
# make testcluster | check/jenkins_check_results_cmake.sh

# This script is supposed to be used when you compiled your scip with cmake.
# This script reads stdout from make testcluster, parses the slurm job ids, and queues jenkins_failcheck_cmake.sh
# to run after the make testcluster jobs finish. The jenkins_failcheck script waits for 5 seconds, then
# runs ./evalcheck_cluster.sh and greps for fails, among other things
# optional: EXECUTABLE specifies the scip binary which should be used, PERFORMANCE=performance enables rubberband support in jenkins_failcheck_cmake.sh.
# The results are uploaded to rubberband with rbcli and if there are fails, an email is sent to the admin.

echo "This is jenkins_check_results_cmake.sh running."

export PSMESSAGE="${PSMESSAGE}"
export IDENT="${IDENT}"

# set up environment for jenkins_failcheck_cmake.sh
TESTSET="${TEST}"
if [ "${TESTSET}" == "" ]; then
   TESTSET=short
   echo "No testset provided, defaulting to '${TESTSET}'."
fi
if [ "${OUTPUTDIR}" == "" ]; then
   OUTPUTDIR=results
   echo "No no outputdir provided, defaulting to '${OUTPUTDIR}'."
fi
if [ "${SETTINGS}" == "" ]; then
   SETTINGS=default
   echo "No setting provided, defaulting to '${SETTINGS}'."
fi
if [ "${EXECUTABLE}" == "" ]; then
   EXECUTABLE=bin/scip
   echo "No executable provided, defaulting to '${EXECUTABLE}'."
fi
if [ "${SLURMACCOUNT}" == "" ]; then
   echo "No slurmaccount provided, omitting"
fi
echo "Using executable '${EXECUTABLE}'."

# exporting the variables to the environment for check/jenkins_failcheck_cmake.sh to use
export TESTSET
export OUTPUTDIR
export SETTINGS
export EXECUTABLE
export GITBRANCH
export MODE
export OPT

# if SEEDS is not a number, set it to 0
re='^[0-9]+$'
if ! [[ ${SEEDS} =~ ${re} ]] ; then
   SEEDS="0"
fi
export SEEDS
# if PERMUTE is not a number, set it to 0
re='^[0-9]+$'
if ! [[ ${PERMUTE} =~ ${re} ]] ; then
   PERMUTE="0"
fi
export PERMUTE
export STARTPERM
export GLBSEEDSHIFT
export GITHASH="$(git describe --always --dirty  | sed -re 's/^.+-g//')"

# read from stdin
# OUTPUTDIR identifies a testrun uniquely
CANCEL_FILE="${OUTPUTDIR}_cancel.txt"
i=0
while read line
do
   if [[ ${line} == Submitted[[:space:]]batch[[:space:]]job[[:space:]]* ]]
   then
      stringarray=(${line})
      slurmjobids[${i}]=${stringarray[-1]}
      ((i++))
      echo "${stringarray[-1]}" >> "${CANCEL_FILE}"
   fi
done < /dev/stdin

echo "To cancel the jobs run"
echo 'for jobid in $(cat '${CANCEL_FILE}'); do scancel ${jobid}; done'
echo "This is an experimental feature, use with caution. In particular, make sure no two jobs have the same TESTSET, SETTINGS and LPS combination!"

# apparently 'set' prints (almost) all environment vars
# whereas 'env' only prints exported ones
set | sort > "${OUTPUTDIR}_envinfo.txt"

# build job ids string for sbatch dependency
jobidsstr=$(printf ",%s" "${slurmjobids[@]}")
jobidsstr=${jobidsstr:1}

# execute checker after all jobs completed
if [ "${SLURMACCOUNT}" == "" ]; then
   sbatch --dependency=afterany:"${jobidsstr}" --kill-on-invalid-dep=yes --cpus-per-task=1 --mem=4000 --time=500 --partition=opt check/jenkins_failcheck_cmake.sh
else
   sbatch --dependency=afterany:"${jobidsstr}" --kill-on-invalid-dep=yes --cpus-per-task=1 --mem=4000 --time=500 --partition=opt --account="${SLURMACCOUNT}" check/jenkins_failcheck_cmake.sh
fi
