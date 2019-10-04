//
//  MergeSort.hpp
//  Sort
//
//  Created by Michale on 2019/10/4.
//  Copyright © 2019 TCL. All rights reserved.
//

#ifndef MergeSort_hpp
#define MergeSort_hpp

#include <stdio.h>
#include "Sort.hpp"

class MergeSort :public Sort{
    
public:
    MergeSort(int array[],int count);
    void sort() override;
};

#endif /* MergeSort_hpp */
