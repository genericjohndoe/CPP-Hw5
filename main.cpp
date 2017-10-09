//
//  main.cpp
//  Hw5
//
//  Created by Joel Johnson on 5/28/15.
//  Copyright (c) 2015 Joel Johnson. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <utility>
#include "StudentInfo.h"
#include "Problem 1.h"
#include "Problem 2.h"
using namespace std;

int main(int argc, const char * argv[]) {
    //Problem 1
    //Creating StudentInfo Objects
    StudentInfo Student1("Anderson, Tate", 'A');
    StudentInfo Student2("Bailey, Ryan", 'A');
    StudentInfo Student3("Chase, Robert", 'B');
    StudentInfo Student4("Young, Andria", 'B');
    StudentInfo Student5("Johnson, Joel", 'C');
    StudentInfo Student6("Young, Andria", 'A');
    //Creating vector of StudentInfo Objects
    vector<StudentInfo> v1;
    //inserting StudentInfo objects to vector (also sorts them)
    insert(v1, Student1);
    insert(v1, Student2);
    insert(v1, Student3);
    insert(v1, Student4);
    insert(v1, Student5);
    insert(v1, Student6);
    
    //printing alphabetized list of names in vector along with grades
    PrintElements(v1);
    
    //Problem 2
    //opens input.txt file and cycles through lines
    ifstream PO;
    string state;
    string college;
    //opening .txt file
    PO.open("input.txt");
    //creating map with string, string vector pairs
    map<string,vector<string> > USAMAP;
    //adding key, value pairs to map by reading lines from input.txt
    while(!PO.eof()){
        getline(PO, state, ';');
        getline(PO, college);
        insert(USAMAP[state], college);
    }
    PO.close();//closes PO
    
    ofstream OUT;
    writeOutput(USAMAP, OUT);//function shows list of universities and states
    
    getSchools(USAMAP);//get input from user, print all universities in the given in input.txt for that state
    return 0;
}
