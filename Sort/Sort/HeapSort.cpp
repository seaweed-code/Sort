//
//  HeapSort.cpp
//  Sort
//
//  Created by weida on 2019/6/26.
//  Copyright © 2019 TCL. All rights reserved.
//

#include "HeapSort.hpp"
#include <iostream>

HeapSort::HeapSort(int a[],int num){
    count = num;
    array = new int[num+1];
    array[0] = 0;
    
    for (int i=0; i<num; i++) {
        array[i+1] = a[i];
    }
}

void HeapSort::print(){
    for (int i=1; i<=count; i++) {
        std::cout<<array[i] << ",";
    }
    std::cout<<"\n";
}

//构造堆
void HeapSort::generateHeap(){
    
    for (int parentIndex=count/2; parentIndex ; parentIndex--) {
        
        int maxIndex = 2 * parentIndex;
        int sonIndex2 = maxIndex + 1;
        if (sonIndex2 <= count) {//two son
            if (array[sonIndex2] > array[maxIndex]) {
                maxIndex = sonIndex2;
            }
        }
        
        if (array[parentIndex] < array[maxIndex]) {
            swap(array[parentIndex], array[maxIndex]);
            adjustHeap(maxIndex, count);//向下调整
        }
        
    }
}

void HeapSort::sort(){
    generateHeap();
    
    for (int i = count; i>1; i--) {
        swap(array[1], array[i]);
        adjustHeap(1, i-1);
    }
}

//向下调整堆
void HeapSort::adjustHeap(int fromIndex, int toIndex){
    
    for (int max = fromIndex*2; max <= toIndex ;) {
        
        int s2 = max+1;
        if (s2 <= toIndex) {//two son
            if (array[s2] > array[max]) {
                max = s2;
            }
        }
        
        if (array[fromIndex] > array[max]) {
            break;
        }
        
        swap(array[fromIndex], array[max]);
        fromIndex = max;
        max = fromIndex *2;
    }
}
