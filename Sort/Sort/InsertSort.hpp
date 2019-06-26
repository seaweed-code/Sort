//
//  InsertSort.hpp
//  Sort
//
//  Created by weida on 2019/6/26.
//  Copyright © 2019 TCL. All rights reserved.
//

#ifndef InsertSort_hpp
#define InsertSort_hpp

#include <stdio.h>
#include "Sort.hpp"

class InsertSort:public Sort {
    
    
public:
    InsertSort(int array[],int cnt);
    void sort();
};

#endif /* InsertSort_hpp */
