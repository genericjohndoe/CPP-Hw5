//
//  Problem 1.cpp
//  Hw5
//
//  Created by Joel Johnson on 5/28/15.
//  Copyright (c) 2015 Joel Johnson. All rights reserved.
//

#include "StudentInfo.h"
StudentInfo::StudentInfo() {
    name = "John Doe";
    grade = 'B';
}
StudentInfo::StudentInfo(string name, char grade){
    this->name = name;
    this->grade = grade;
}
                 
string StudentInfo::getName(){
    return name;
}

void StudentInfo::setName(string name){
    this->name = name;
}
char StudentInfo::getGrade(){
    return grade;
}
void StudentInfo::setGrade(char newgrade){
    grade = newgrade;
}

bool StudentInfo::operator<(StudentInfo& s) {
    return this->getName() < s.getName();
}

bool StudentInfo::operator>(StudentInfo& s) {
    return this->getName() > s.getName();
}