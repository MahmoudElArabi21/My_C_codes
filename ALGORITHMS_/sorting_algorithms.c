#include "sorting_algorithms.h"

static void swappig (int *a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sort_bubble(int arr[], int size){
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

void sort_insertion (int arr[], int size){
    int comp_i = 0, key_item =0;
    for(int i=1 ;i <size ; i++){
        key_item = arr[i];
        comp_i = i-1;
        while ((key_item < arr[comp_i]) && comp_i >=0 ){
            arr[comp_i+1] = arr[comp_i];
            comp_i--;
        }
        arr[comp_i+1] = key_item;
    }
}

void sort_selection (int arr[], int size){
    int min_index =0;
    for(int i=0 ; i< size-1; i++){
        min_index = i;
        for(int j = i+1; j<size ; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
            else{}
        }
        swappig(&arr[min_index], &arr[i]);
    }
}
