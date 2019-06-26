//
//  Sort.cpp
//  Sort
//
//  Created by weida on 2019/6/26.
//  Copyright © 2019 TCL. All rights reserved.
//

#include "Sort.hpp"
#include <iostream>

Sort::Sort(int a[],int num):count(num),array(new int[num]){
    for (int i=0; i<num; i++) {
        array[i] = a[i];
    }
    std::cout<<"原始数组:";
    print();
}

void Sort::print(){
    for (int i=0; i<count; i++) {
        std::cout<<array[i] << ",";
    }
    std::cout<<"\n";
}

Sort::~Sort(){
    std::cout<<"Sort销毁了";
    delete [] array;
}
