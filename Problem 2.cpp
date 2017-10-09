//
//  Problem 2.cpp
//  Hw5
//
//  Created by Joel Johnson on 6/4/15.
//  Copyright (c) 2015 Joel Johnson. All rights reserved.
//

#include "Problem 2.h"
#include <iostream>
using namespace std;


void getSchools(map<string, vector<string> >& v){
    string state;
    while (true){
    cout << "Please enter state abbreviation: ";
    cin >> state;
    if (state == "exit")
        break;
    if( (v[state]).size() != 0){
        for (vector<string>::iterator i = v[state].begin(); i != v[state].end(); i++){
            cout << *i << endl;
        }
        cout << endl;
    }else{
        cout << "There are no universities from that state on the list. " << endl;
    }
    }
}

void writeOutput(map<string, vector<string> >& v, ofstream& O){
    O.open("output.txt");
    //inner loop cycles through the universities in the state
    //outer loop cycles through the states
    for (map<string,vector<string> >::iterator i = v.begin(); i != v.end(); i++){
        for (vector<string>::iterator j = (i->second).begin(); j != (i->second).end(); j++){
            O << i->first << ";" << *j << endl;
        }
    }
    O.close();//closes the file to avoid memory leaks and file corruption
}
