#include <stdio.h>

void print_array (int arr[], int size){
    for (int i=0; i<size; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void swap_2_arrays_same_size(int arr1[], int arr2[], int size){
    for (int i=0; i<size; i++) {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}


int main(){
    int arr0[3] = {11,12,13};
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {6,7,8,9,10};
    int arr3[8] = {11,12,13,14,15,16,17,18};
    print_array(arr1, 5);
    print_array(arr2, 5);
    swap_2_arrays_same_size(arr1, arr2, 5);
    printf("after swapping same_size: \n");
    print_array(arr1, 5);
    print_array(arr2, 5);


}