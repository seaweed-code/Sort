//
//  ShellSort.cpp
//  Sort
//
//  Created by weida on 2019/6/26.
//  Copyright © 2019 TCL. All rights reserved.
//

#include "ShellSort.hpp"

ShellSort::ShellSort(int arry[],int cnt):Sort(arry,cnt){
}

void ShellSort::sort(){
     for(int gap=count/2;gap>0;gap/=2){
         //从第gap个元素，逐个对其所在组进行直接插入排序操作
         for(int i=gap;i<count;i++){
             int j = i;
             while(j-gap>=0 && array[j]<array[j-gap]){
                 //插入排序采用交换法
                 swap(array[j], array[j-gap]);
                 j-=gap;
             }
         }
     }
}
