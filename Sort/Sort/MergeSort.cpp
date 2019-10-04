//
//  MergeSort.cpp
//  Sort
//
//  Created by Michale on 2019/10/4.
//  Copyright © 2019 TCL. All rights reserved.
//

#include "MergeSort.hpp"

MergeSort::MergeSort(int array[],int count):Sort(array, count){
}

int* MergeSort::sort(int fromIndex, int toIndex){
    int *newArray = nullptr;
    int diff = toIndex - fromIndex;
    
    if (diff < 0) {
        return newArray;
    }
    
    newArray = new int[diff+1];
    
    switch (diff) {
        case 0:
            newArray[0] = array[fromIndex];
            break;
        case 1:
            if (array[fromIndex] > array[toIndex]) {
                swap(array[fromIndex] , array[toIndex]);
            }
                   
            for (int i=0; i<2; i++) {
                newArray[i] = array[fromIndex+i];
            }
            break;
        default:
            int sep = fromIndex+diff/2;
            int *headArray = sort(fromIndex, sep);
            int *tailArray = sort(sep+1, toIndex);
           
            for (int i=0,pHead=0,pTail=0; i<=diff; i++) {
                int  r = ((pHead <= sep - fromIndex)<<1) | (pTail <= toIndex - sep -1);
                
                switch (r) {
                    case 0b11:
                        if (headArray[pHead] < tailArray[pTail]) {
                            newArray[i] = headArray[pHead];
                            pHead ++;
                        }else{
                            newArray[i] = tailArray[pTail];
                            pTail ++;
                        }
                        break;
                    case 0b01:
                        newArray[i] = tailArray[pTail];
                        pTail ++;
                        break;
                    case 0b10:
                        newArray[i] = headArray[pHead];
                        pHead ++;
                        break;
                    default:
                        break;
                }
            }
            
            //free
            if (headArray) {
                delete [] headArray;
            }
            if (tailArray) {
                 delete [] tailArray;
            }
            break;
    }
    return newArray;
}


void MergeSort::sort(){
    int *newArray = sort(0, count-1);
    if (array) {
        delete [] array;
    }
    array = newArray;
}
