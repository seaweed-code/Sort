//
//  ShellSort.hpp
//  Sort
//
//  Created by weida on 2019/6/26.
//  Copyright © 2019 TCL. All rights reserved.
//

#ifndef ShellSort_hpp
#define ShellSort_hpp

#include <stdio.h>
#include "Sort.hpp"

class ShellSort:public Sort {
    
public:
    ShellSort(int arry[],int cnt);
    void sort();
};

#endif /* ShellSort_hpp */
