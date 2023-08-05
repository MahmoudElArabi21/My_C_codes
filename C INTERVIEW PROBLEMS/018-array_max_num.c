// C function returns the maximum number in array.
#include <stdio.h>

void print_array (int arr[], int size){
    for (int i=0; i<size; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int array_max_num(int arr[], int size){
    int max = arr[0];
    for (int i=0; i<size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int My_Data[10] = {8, 1, 10, 5, 0, 7, 3, 2, 4, 6};
int  main(){
   int a = array_max_num(My_Data, 10);
   printf("the max number ib array is %d", a);
}