//
//  HeapSort.hpp
//  Sort
//
//  Created by weida on 2019/6/26.
//  Copyright © 2019 TCL. All rights reserved.
//

#ifndef HeapSort_hpp
#define HeapSort_hpp

#include <stdio.h>
#include "Sort.hpp"


class HeapSort:public Sort {
    
private:
    void adjustHeap(int fromIndex, int toIndex);
    void generateHeap();
    
public:
    HeapSort(int array[],int count);
    virtual void sort();
    virtual void print();
};

#endif /* HeapSort_hpp */
