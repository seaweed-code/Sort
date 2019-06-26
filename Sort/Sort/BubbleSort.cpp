//
//  BubbleSort.cpp
//  Sort
//
//  Created by weida on 2019/6/26.
//  Copyright © 2019 TCL. All rights reserved.
//

#include "BubbleSort.hpp"

BubbleSort::BubbleSort(int array[],int count):Sort(array,count){
}


void BubbleSort::startSort(){
    for (int i = count-1; i>0; i--) {
        for (int j=0; j<i; j++) {
            if (array[j] > array[j+1]) {
                swap(array[j], array[j+1]);
            }
        }
    }
}


