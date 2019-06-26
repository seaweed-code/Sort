//
//  QuickSort.cpp
//  Sort
//
//  Created by weida on 2019/6/26.
//  Copyright © 2019 TCL. All rights reserved.
//

#include "QuickSort.hpp"
#include <iostream>

QuickSort::QuickSort(int ary[],int cnt):Sort(ary,cnt){
}

int QuickSort::seperator(int start, int end){
    int base = array[start];
    int left = start +1;
    int right = end;
    
    while (1) {
        while (left <= end && array[left] <= base) left++;
        while (right >= left && array[right] >= base) right--;
        
        if (right > left) {
            swap(array[left], array[right]);
        }else{
            swap(array[start], array[right]);
            break;
        }
    }
    return right;
}

void QuickSort::startSort(int start, int end){
    int position = seperator(start, end);
    
    if (position > start) {
        startSort(start, position-1);
    }
    
    if (position < end) {
        startSort(position+1, end);
    }
}

void QuickSort::startSort(){
    startSort(0, count-1);
}
