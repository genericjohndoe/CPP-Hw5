//
//  Problem 1.h
//  Hw5
//
//  Created by Joel Johnson on 5/28/15.
//  Copyright (c) 2015 Joel Johnson. All rights reserved.
//

#ifndef __Hw5__Problem_1__
#define __Hw5__Problem_1__

#include <stdio.h>
#include <vector>
#include "StudentInfo.h"
using std::vector;


template <class T>
void alphabetize(vector<T>& v){//sorts contents of vector in lexicographical order
    for (int i = 0; i < (v.size()-1); i++){
        for (int j = i+1; j < (v.size());j++){
            if (v[i] > v[j]) {
                T temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
}

template <class T, class E>
//appends object to vector and sorts after every push_back
void insert(vector<T>& v, E& s){
    v.push_back(s);
    alphabetize(v);
}


void PrintElements(vector<StudentInfo>& v);
//requires StudentInfo Vector as input
//prints student's name and grade 


#endif /* defined(__Hw5__Problem_1__) */
