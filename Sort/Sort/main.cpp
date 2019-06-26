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

int main(int argc, const char * argv[]) {
    
    int array[] = {9,10,0,8,1232,2312,10001001,66,32,34,44,00,4,5,23,100};
    Sort *sort;
    int cnt = sizeof(array)/sizeof(int);
    
    
//    //冒泡排序
//    BubbleSort bubble(array,cnt);
//    sort = &bubble;
//    
//    //插入排序
//    InsertSort insert(array,cnt);
//    sort = &insert;
//    
//    //快速排序
//    QuickSort quick(array,cnt);
//    sort = &quick;
//
//    //选择排序
//    SelectionSort selection(array,cnt);
//    sort = &selection;
    
    //希尔排序
    ShellSort shell(array,cnt);
    sort = &shell;
    
    
    sort->sort();
    sort->print();

    return 0;
}


