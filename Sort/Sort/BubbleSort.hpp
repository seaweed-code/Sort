//
//  BubbleSort.hpp
//  Sort
//
//  Created by weida on 2019/6/26.
//  Copyright © 2019 TCL. All rights reserved.
//

#ifndef BubbleSort_hpp
#define BubbleSort_hpp

#include <stdio.h>
#include "Sort.hpp"

class BubbleSort:public Sort {
    
public:
    BubbleSort(int array[],int count);
    
    virtual void sort();
};

#endif /* BubbleSort_hpp */
