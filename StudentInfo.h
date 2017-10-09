//
//  Problem 1.h
//  Hw5
//
//  Created by Joel Johnson on 5/28/15.
//  Copyright (c) 2015 Joel Johnson. All rights reserved.
//

#ifndef __Hw5__StudentInfo__
#define __Hw5__StudentInfo__

#include <stdio.h>
#include <iostream>
using std::string;

class StudentInfo {
public:
    StudentInfo();
    StudentInfo(string name, char grade);
    string getName();
    void setName(string name);
    char getGrade();
    void setGrade(char newgrade);
    bool operator <(StudentInfo& s);//overloaded to make alphabetize function general
    bool operator >(StudentInfo& s);//overloaded to make alphabetize function general
private:
    string name;
    char grade;
};

#endif /* defined(__Hw5__StudentInfo__) */
