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
    int count;
    int* array;
   
    inline static void swap(int &a,int &b){
        int tmp = a;
        a = b;
        b = tmp;
    }
    
public:
    Sort();
    Sort(int array[],int count);

   
    virtual void print();
    void sortAndPrint();
    
    //开始排序
    virtual void sort()=0;
    
    virtual ~Sort();
};

#endif /* Sort_hpp */
