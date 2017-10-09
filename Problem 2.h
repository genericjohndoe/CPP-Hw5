//
//  Problem 2.h
//  Hw5
//
//  Created by Joel Johnson on 6/4/15.
//  Copyright (c) 2015 Joel Johnson. All rights reserved.
//

#ifndef __Hw5__Problem_2__
#define __Hw5__Problem_2__

#include <stdio.h>
#include <map>
#include <vector>
#include <string>
#include <fstream>

using std::map;
using std::vector;
using std::string;
using std::ofstream;

void getSchools(map<string, vector<string> >& v);
//uses map as input, requires user input (must enter state abbreviation)
//returns list of universities in the state
void writeOutput(map<string, vector<string> >& v, ofstream& O);
//uses map and ofstream as input
//returns output file with list of university/state in order

#endif /* defined(__Hw5__Problem_2__) */
