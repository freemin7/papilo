/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                           */
/*               This file is part of the program and library                */
/*    PaPILO --- Parallel Presolve for Integer and Linear Optimization       */
/*                                                                           */
/* Copyright (C) 2020  Konrad-Zuse-Zentrum                                   */
/*                     fuer Informationstechnik Berlin                       */
/*                                                                           */
/* This program is free software: you can redistribute it and/or modify      */
/* it under the terms of the GNU Lesser General Public License as published  */
/* by the Free Software Foundation, either version 3 of the License, or      */
/* (at your option) any later version.                                       */
/*                                                                           */
/* This program is distributed in the hope that it will be useful,           */
/* but WITHOUT ANY WARRANTY; without even the implied warranty of            */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the             */
/* GNU Lesser General Public License for more details.                       */
/*                                                                           */
/* You should have received a copy of the GNU Lesser General Public License  */
/* along with this program.  If not, see <https://www.gnu.org/licenses/>.    */
/*                                                                           */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef PAPILO_TEST_INSTANCES_EGOUT
#define PAPILO_TEST_INSTANCES_EGOUT

#include "papilo/core/Problem.hpp"
#include "papilo/core/ProblemBuilder.hpp"

namespace papilo
{
namespace instances
{

Problem<double>
egout()
{
   ///PROBLEM BUILDER CODE
   Vec<double> coeffobj{28.21,18.57,8.45,21.16,28.38,9.8,23.29,5.07,6.78,2.9,27.89,10.03,14.74,6.19,22.1,15.82,11.33,5.79,3.9,24.79,16.36,3.45,2.26,3.86,8.41,26.46,16.01,16.73,11.75,3.25,27.41,5.98,21.88,43.71,11.42,23.4,7.5,6.73,5.92,9.7,12.67,26.45,2.71,5.89,9.85,8.5,9.0,2.27,6.37,16.2,23.58,29.93,6.73,20.66,30.92,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.979,0.034,0.016,0.914,0.057,0.016,0.969,0.006,0.01,0.002,0.976,0.017,0.027,0.009,0.964,0.025,0.015,0.01,0.006,0.97,0.022,0.003,0.002,0.004,0.969,0.021,0.026,0.022,0.005,0.971,0.004,0.054,0.054,1.017,0.02,0.967,0.011,0.012,0.004,0.012,0.024,0.975,0.002,0.004,0.018,0.016,0.015,0.001,0.009,0.025,0.967,0.98,0.01,0.035,0.978,};
   Vec<double> lbs{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,2.45,0.61,7.91,4.54,1.14,0.28,1.13,21.46,4.64,0.31,1.24,0.07,2.41,0.39,7.41,0.07,19.22,10.49,0.88,5.7,0.28,0.28,0.19,0.19,0.28,0.57,5.3,5.32,0.76,5.08,6.44,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,};
   Vec<bool> lbInf{false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,};
   Vec<double> ubs{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,2.45,0.61,7.91,4.54,1.14,0.28,1.13,21.46,4.64,0.31,1.24,0.07,2.41,0.39,7.41,0.07,19.22,10.49,0.88,5.7,0.28,0.28,0.19,0.19,0.28,0.57,5.3,5.32,0.76,5.08,6.44,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,};
   Vec<bool> ubInf{false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,};
   Vec<bool> isIntegral{true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,};
   Vec<bool> lhsIsInf{false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,};
   Vec<double> lhs{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,};
   Vec<bool> rhsIsInf{false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,};
   Vec<double> rhs{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,};
   Vec<std::tuple<int, int, double>> entries{{0,55,1.0},{0,56,1.0},{0,57,1.0},{0,58,1.0},{0,59,1.0},{0,60,1.0},{0,61,1.0},{0,62,1.0},{0,63,1.0},{0,64,1.0},{0,65,1.0},{0,66,1.0},{0,67,1.0},{0,68,1.0},{0,69,1.0},{0,70,1.0},{0,71,1.0},{0,72,1.0},{0,73,1.0},{0,74,1.0},{0,75,1.0},{0,76,1.0},{0,77,1.0},{0,78,1.0},{0,79,1.0},{0,80,1.0},{0,81,1.0},{0,82,1.0},{0,83,1.0},{0,84,1.0},{0,85,1.0},{0,86,-1.0},{0,89,-1.0},{0,92,-1.0},{0,96,-1.0},{0,100,-1.0},{0,105,-1.0},{0,111,-1.0},{0,116,-1.0},{0,119,-1.0},{0,121,-1.0},{0,127,-1.0},{0,136,-1.0},{0,137,-1.0},{0,140,-1.0},{1,55,-1.0},{1,86,1.0},{1,87,1.0},{2,56,-1.0},{2,88,1.0},{2,89,1.0},{3,57,-1.0},{3,91,1.0},{3,92,1.0},{4,58,-1.0},{4,94,1.0},{5,59,-1.0},{5,93,-1.0},{5,94,-1.0},{5,95,1.0},{6,60,-1.0},{6,97,-1.0},{6,108,1.0},{7,61,-1.0},{7,98,1.0},{8,62,-1.0},{8,99,1.0},{9,63,-1.0},{9,101,-1.0},{9,102,1.0},{10,64,-1.0},{10,103,1.0},{11,65,-1.0},{11,103,-1.0},{11,104,1.0},{12,66,-1.0},{12,106,-1.0},{12,107,1.0},{13,67,-1.0},{13,109,-1.0},{13,110,1.0},{14,68,-1.0},{14,114,1.0},{15,69,-1.0},{15,115,1.0},{16,70,-1.0},{16,112,1.0},{16,113,-1.0},{17,71,-1.0},{17,118,1.0},{17,119,1.0},{18,72,-1.0},{18,117,-1.0},{18,118,-1.0},{18,120,1.0},{19,73,-1.0},{19,126,1.0},{19,127,1.0},{20,74,-1.0},{20,125,1.0},{20,126,-1.0},{21,75,-1.0},{21,123,1.0},{22,76,-1.0},{22,123,-1.0},{22,124,1.0},{22,125,-1.0},{23,77,-1.0},{23,128,-1.0},{23,129,1.0},{24,78,-1.0},{24,131,1.0},{25,79,-1.0},{25,132,1.0},{26,80,-1.0},{26,130,1.0},{26,131,-1.0},{26,132,-1.0},{27,81,-1.0},{27,133,-1.0},{27,134,1.0},{28,82,-1.0},{28,135,1.0},{29,83,-1.0},{29,134,-1.0},{29,135,-1.0},{29,136,1.0},{29,138,1.0},{30,84,-1.0},{30,137,1.0},{30,138,-1.0},{30,139,1.0},{31,85,-1.0},{31,139,-1.0},{31,140,1.0},{32,87,-1.0},{32,88,-1.0},{32,90,1.0},{33,90,-1.0},{33,91,-1.0},{33,93,1.0},{34,95,-1.0},{34,96,1.0},{34,97,1.0},{35,98,-1.0},{35,99,-1.0},{35,100,1.0},{35,101,1.0},{36,102,-1.0},{36,104,-1.0},{36,105,1.0},{36,106,1.0},{37,107,-1.0},{37,108,-1.0},{37,109,1.0},{38,110,-1.0},{38,111,1.0},{38,112,-1.0},{38,117,1.0},{39,113,1.0},{39,114,-1.0},{39,115,-1.0},{39,116,1.0},{40,120,-1.0},{40,121,1.0},{40,122,1.0},{41,122,-1.0},{41,124,-1.0},{41,128,1.0},{42,129,-1.0},{42,130,-1.0},{42,133,1.0},{43,0,-117.04},{43,86,1.0},{44,1,-117.04},{44,87,1.0},{45,2,-117.04},{45,88,1.0},{46,3,-117.04},{46,89,1.0},{47,4,-117.04},{47,90,1.0},{48,5,-117.04},{48,91,1.0},{49,6,-117.04},{49,92,1.0},{50,7,-117.04},{50,93,1.0},{51,8,-117.04},{51,94,1.0},{52,9,-117.04},{52,95,1.0},{53,10,-117.04},{53,96,1.0},{54,11,-117.04},{54,97,1.0},{55,12,-117.04},{55,98,1.0},{56,13,-117.04},{56,99,1.0},{57,14,-117.04},{57,100,1.0},{58,15,-117.04},{58,101,1.0},{59,16,-117.04},{59,102,1.0},{60,17,-117.04},{60,103,1.0},{61,18,-117.04},{61,104,1.0},{62,19,-117.04},{62,105,1.0},{63,20,-117.04},{63,106,1.0},{64,21,-117.04},{64,107,1.0},{65,22,-117.04},{65,108,1.0},{66,23,-117.04},{66,109,1.0},{67,24,-117.04},{67,110,1.0},{68,25,-117.04},{68,111,1.0},{69,26,-117.04},{69,112,1.0},{70,27,-117.04},{70,113,1.0},{71,28,-117.04},{71,114,1.0},{72,29,-117.04},{72,115,1.0},{73,30,-117.04},{73,116,1.0},{74,31,-117.04},{74,117,1.0},{75,32,-117.04},{75,118,1.0},{76,33,-117.04},{76,119,1.0},{77,34,-117.04},{77,120,1.0},{78,35,-117.04},{78,121,1.0},{79,36,-117.04},{79,122,1.0},{80,37,-117.04},{80,123,1.0},{81,38,-117.04},{81,124,1.0},{82,39,-117.04},{82,125,1.0},{83,40,-117.04},{83,126,1.0},{84,41,-117.04},{84,127,1.0},{85,42,-117.04},{85,128,1.0},{86,43,-117.04},{86,129,1.0},{87,44,-117.04},{87,130,1.0},{88,45,-117.04},{88,131,1.0},{89,46,-117.04},{89,132,1.0},{90,47,-117.04},{90,133,1.0},{91,48,-117.04},{91,134,1.0},{92,49,-117.04},{92,135,1.0},{93,50,-117.04},{93,136,1.0},{94,51,-117.04},{94,137,1.0},{95,52,-117.04},{95,138,1.0},{96,53,-117.04},{96,139,1.0},{97,54,-117.04},{97,140,1.0},};
   Vec<std::string> rnames{"...","001","002","004","006","007","009","010","011","013","014","015","017","019","020","021","023","025","026","028","029","030","031","033","034","035","036","038","039","040","041","042","003","005","008","012","016","018","024","022","027","032","037","U.001...","U.001003","U.002003","U.002...","U.003005","U.004005","U.004...","U.005007","U.006007","U.007008","U.008...","U.008009","U.010012","U.011012","U.012...","U.012013","U.013016","U.014015","U.015016","U.016...","U.016017","U.017018","U.009018","U.018019","U.019024","U.024...","U.023024","U.022023","U.020022","U.021022","U.022...","U.024026","U.025026","U.025...","U.026027","U.027...","U.027032","U.030031","U.031032","U.029031","U.028029","U.028...","U.032033","U.033037","U.036037","U.034036","U.035036","U.037038","U.038040","U.039040","U.040...","U.041...","U.040041","U.041042","U.042...",};
   Vec<std::string> cnames{"I.001...","I.001003","I.002003","I.002...","I.003005","I.004005","I.004...","I.005007","I.006007","I.007008","I.008...","I.008009","I.010012","I.011012","I.012...","I.012013","I.013016","I.014015","I.015016","I.016...","I.016017","I.017018","I.009018","I.018019","I.019024","I.024...","I.023024","I.022023","I.020022","I.021022","I.022...","I.024026","I.025026","I.025...","I.026027","I.027...","I.027032","I.030031","I.031032","I.029031","I.028029","I.028...","I.032033","I.033037","I.036037","I.034036","I.035036","I.037038","I.038040","I.039040","I.040...","I.041...","I.040041","I.041042","I.042...","F....001","F....002","F....004","F....006","F....007","F....009","F....010","F....011","F....013","F....014","F....015","F....017","F....019","F....020","F....021","F....023","F....025","F....026","F....028","F....029","F....030","F....031","F....033","F....034","F....035","F....036","F....038","F....039","F....040","F....041","F....042","F.001...","F.001003","F.002003","F.002...","F.003005","F.004005","F.004...","F.005007","F.006007","F.007008","F.008...","F.008009","F.010012","F.011012","F.012...","F.012013","F.013016","F.014015","F.015016","F.016...","F.016017","F.017018","F.009018","F.018019","F.019024","F.024...","F.023024","F.022023","F.020022","F.021022","F.022...","F.024026","F.025026","F.025...","F.026027","F.027...","F.027032","F.030031","F.031032","F.029031","F.028029","F.028...","F.032033","F.033037","F.036037","F.034036","F.035036","F.037038","F.038040","F.039040","F.040...","F.041...","F.040041","F.041042","F.042...",};
   int nCols = 141; int nRows = 98;
   ProblemBuilder<double> pb;
   pb.reserve( 282,98,141 );
   pb.setNumRows( nRows );
   pb.setNumCols( nCols );
   pb.setObjAll( coeffobj );
   pb.setObjOffset( 0.0 );
   pb.setColLbAll( lbs );
   pb.setColLbInfAll( lbInf );
   pb.setColUbAll( ubs );
   pb.setColUbInfAll( ubInf );
   pb.setColIntegralAll( isIntegral );
   pb.setRowLhsInfAll( lhsIsInf );
   pb.setRowRhsInfAll( rhsIsInf );
   pb.setRowLhsAll( lhs );
   pb.setRowRhsAll( rhs );
   pb.setRowNameAll( rnames );
   pb.addEntryAll( entries );
   pb.setColNameAll( cnames );
   pb.setProblemName( "egout.hpp" );
   Problem<double> problem = pb.build();
   ///PROBLEM BUILDER CODE END

   return problem;
}

} // namespace instances
} // namespace papilo

#endif
