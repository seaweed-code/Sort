//
//  SelectionSort.hpp
//  Sort
//
//  Created by weida on 2019/6/26.
//  Copyright © 2019 TCL. All rights reserved.
//

#ifndef SelectionSort_hpp
#define SelectionSort_hpp

#include <stdio.h>
#include "Sort.hpp"


class SelectionSort:public Sort {
    
    
public:
    SelectionSort(int array[],int cnt);
    void startSort();
};

#endif /* SelectionSort_hpp */
