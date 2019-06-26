//
//  SelectionSort.cpp
//  Sort
//
//  Created by weida on 2019/6/26.
//  Copyright © 2019 TCL. All rights reserved.
//

#include "SelectionSort.hpp"


SelectionSort::SelectionSort(int array[],int cnt):Sort(array,cnt){
}


void SelectionSort::sort(){
    for (int i=count-2; i>=0; i--) {
        int maxIndex = i+1;
        for (int j=0; j<=i; j++) {
            if (array[j] > array[maxIndex]) {
                maxIndex = j;
            }
        }
        swap(array[i+1], array[maxIndex]);
    }
}
