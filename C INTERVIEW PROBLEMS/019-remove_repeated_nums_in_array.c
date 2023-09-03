//write a function that receives an array and removes Repeated elements
#include <stdio.h>
#include <stdlib.h>

void print_array (int arr[], int size){
    for (int i=0; i<size; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int arr [] =    {66, 53, 1, 37, 11, 48, 24, 70, 78, 57, 23, 9, 47, 61, 33, 54,
                 66,     1,         48,         78,         9,         33};

void remove_repeated_nums(int arr[], int size, int *new_size){

}
int main(){
    int newsize = 0;
    int size = sizeof(arr)/ sizeof(arr[0]);
    print_array(arr, size);
    remove_repeated_nums(arr, size, &newsize);
    print_array(arr, newsize);
}