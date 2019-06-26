//
//  InsertSort.cpp
//  Sort
//
//  Created by weida on 2019/6/26.
//  Copyright © 2019 TCL. All rights reserved.
//

#include "InsertSort.hpp"

InsertSort::InsertSort(int array[],int cnt):Sort(array,cnt){
    
}

void InsertSort::sort(){
    for (int i = 1; i<count; i++) {
        for (int j=i-1; j>=0; j--) {
            if (array[j] > array[j+1] ) {
                swap(array[j], array[j+1]);
            }else{
                break;
            }
        }
    }
}
