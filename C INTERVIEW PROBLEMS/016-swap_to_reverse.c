// C Code to SWAP to arrays in reverse order.

#include <stdio.h>
#include <stdlib.h>

void print_array (int arr[], int size){
    for (int i=0; i<size; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void swap_2_arrays_tor_everse(int arr1[], int arr2[], int size){
    int *temparr1 = (int *) malloc(size * sizeof(int));
    int *temparr2 = (int *) malloc(size * sizeof(int));
    int i=0, j=0;
    for (i=size-1, j=0 ; i>=0, j<size; i--, j++) {
        temparr1[i] = arr1[j];
        temparr2[i] = arr2[j];
    }
    for (i=0; i<size; i++) {
        arr2[i] = temparr1[i];
        arr1[i] = temparr2[i];
    }
}


int main(){
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {6,7,8,9,10};
    swap_2_arrays_tor_everse(arr1, arr2, 5);
    print_array(arr1, 5);   // 10 9 8 7 6
    print_array(arr2, 5);    // 5 4 3 2 1
}