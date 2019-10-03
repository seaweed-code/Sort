//
//  main.cpp
//  Sort
//
//  Created by weida on 2019/6/26.
//  Copyright © 2019 TCL. All rights reserved.
//

#include <iostream>
#include "BubbleSort.hpp"
#include "QuickSort.hpp"
#include "InsertSort.hpp"
#include "SelectionSort.hpp"
#include "ShellSort.hpp"
#include "HeapSort.hpp"

int main(int argc, const char * argv[]) {
    
    int array[] = {9,10,0,8,1232,2312,10001001,66,32,34,44,00,4,5,23,100,9,89};
    int cnt = sizeof(array)/sizeof(int);
    
//    BubbleSort bubble(array,cnt);//冒泡排序
//    InsertSort insert(array,cnt);//插入排序
//    QuickSort quick(array,cnt);//快速排序
//    SelectionSort selection(array,cnt);//选择排序
//    ShellSort shell(array,cnt);//希尔排序
    HeapSort heap(array,cnt); //堆排序
    
    Sort *sorts[] = {&heap};
        //,&insert,&quick,&selection,&shell};

    for (auto sort: sorts) {
        sort->sortAndPrint();
    }
    
   

    return 0;
}


