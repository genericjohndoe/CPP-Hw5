//
//  Problem 1.cpp
//  Hw5
//
//  Created by Joel Johnson on 5/28/15.
//  Copyright (c) 2015 Joel Johnson. All rights reserved.
//
#include <vector>
#include "Problem 1.h"
using std::vector;
using std::cout;
using std::endl;

void PrintElements(vector<StudentInfo>& v) {
    cout << "The names and grades of the students are as follows: " << endl;
    for (unsigned int i = 0; i < v.size(); i++){
        cout <<"Name: "<< v[i].getName()<< ", " << "Grade: "<<v[i].getGrade() << endl;
    }
    cout<< endl;
}


