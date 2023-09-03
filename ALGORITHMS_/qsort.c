#include <stdlib.h>
#include <stdio.h>

#define max_size 8

void arr_disply(int arr[], int size){
    for (int i=0; i<size; i++) {
        printf("%i\t", arr[i]);
    }
    printf("\n");
}

int compfunc(void const *a, void const *b){
    return *(int*)a - *(int*)b;
}

int main(){
    int arr[max_size] = {5, 6, 9, 7, 3, 0, 11, 8};
    printf("your array :\t");
    arr_disply(arr, max_size);
    qsort(arr, max_size, sizeof(arr[0]), compfunc);
    printf("sorted as  : \t");
    arr_disply(arr, max_size);
}
