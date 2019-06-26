//
//  QuickSort.hpp
//  Sort
//
//  Created by weida on 2019/6/26.
//  Copyright © 2019 TCL. All rights reserved.
//

#ifndef QuickSort_hpp
#define QuickSort_hpp

#include <stdio.h>
#include "Sort.hpp"

class QuickSort:public Sort {

private:
    int seperator(int start,int end);
    
    
    
public:
    QuickSort(int ary[],int cnt);
    virtual void sort();
    void sort(int start,int end);
};

#endif /* QuickSort_hpp */
