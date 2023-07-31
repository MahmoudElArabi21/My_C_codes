#include "search_algotithms.h"

sint32 linear_search(sint32 *arr, uint32 arr_size, sint32 element){
    for( int i =0; i< arr_size; i++){
        if (arr[i] == element){
            return i;
        }
    }
    return -1;
}

sint32 linear_search_both_sides(sint32 *arr, uint32 arr_size, sint32 element){
    int left_index=0, right_index =arr_size -1;
    for ( left_index = 0;  left_index < right_index ; left_index++, right_index--){
        if (element == arr[left_index]){
            return left_index;
        }
        if (element == arr[right_index]){
            return right_index;
        }
    }
    return -1;
}

sint32 binary_search(sint32 *arr, uint32 arr_size, sint32 element){
    uint32 si=0, mi=0, ei=arr_size-1;
    while (si <= ei){
        mi = si + (ei -si)/2;
        if (element == arr[mi]){
            return mi;
        }
        else if (element > arr[mi]){
            si = mi+1;
        }
        else{
            ei = mi-1;
        }
    }
    return -1;    
}