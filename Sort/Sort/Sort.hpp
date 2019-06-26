//
//  Sort.hpp
//  Sort
//
//  Created by weida on 2019/6/26.
//  Copyright © 2019 TCL. All rights reserved.
//

#ifndef Sort_hpp
#define Sort_hpp

#include <stdio.h>


class Sort {
    
protected:
    const int count;
    int* const array;
   
    inline static void swap(int &a,int &b){
        int tmp = a;
        a = b;
        b = tmp;
    }
    
public:
    Sort(int array[],int count);

    void print();
    
    //开始排序
    virtual void startSort()=0;
    
    virtual ~Sort();
};

#endif /* Sort_hpp */
