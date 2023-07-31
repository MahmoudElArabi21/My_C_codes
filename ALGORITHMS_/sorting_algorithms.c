#include "sorting_algorithms.h"

static void swappig (int *a, int*b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
void bubble_sort(int arr[], int size){
    char flag = 0;
    for (int i  = 0;  i< size-1 ; i++){
        for (int j  = 0;  j< size-1-i ; j++){
            if(arr[j] > arr[j+1]){
                swappig (&arr[j], &arr[j+1]);
                flag = 1;
            }
        }
        if(flag == 0){
            return;
        }
    }
     
}