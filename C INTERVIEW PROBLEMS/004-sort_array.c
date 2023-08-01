#include <stdio.h>
#include <stdlib.h>

void swapping (int*a, int*b);
void arr_print(int arr[], int size);
void bubble_sort (int arr[], int size);
void insertion_sort (int arr[], int size);
void selection_sort(int arr[], int size);

int main(){
    printf("bubble_sort======================================\n");
    int My_Data[10] = {8, 1, 10, 5, 0, 7, 3, 2, 4, 6};
    bubble_sort(My_Data, 10);
    arr_print(My_Data, 10);

    printf("insertion_sort======================================\n");
    int My_Data1[10] = {8, 1, 10, 5, 0, 7, 3, 2, 4, 6};
    insertion_sort(My_Data1, 10);
    arr_print(My_Data1, 10);

    printf("selection_sort======================================\n");
    int My_Data2[10] = {8, 1, 10, 5, 0, 7, 3, 2, 4, 6};
    selection_sort(My_Data2, 10);
    arr_print(My_Data2, 10);
}

void swapping (int*a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void arr_print(int arr[], int size){
    for (int i=0; i<size; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
void bubble_sort (int arr[], int size){
    int flag =0;
    for (int i=0; i<size; i++) {
        for (int j =0; j<size-1-i; j++) {
            if (arr[j]>arr[j+1]) {
                swapping(&arr[j], &arr[j+1]);
                flag = 1;
            }
        }
        if (flag == 0) {
            break;
        }
    }
}

void insertion_sort (int arr[], int size){
    int key =0, comp_insex=0; 
    for (int i=1; i<size; i++) {
        comp_insex = i-1;
        key = arr[i];
        for (int j = 0; j< i; j++) {
            if (key< arr[comp_insex]) {
                arr[comp_insex+1] = arr[comp_insex];
                comp_insex --;
            }
        }
        arr[comp_insex+1] = key;
    }
}

void selection_sort(int arr[], int size){
    int min_elem_index = 0;
    for (int i=0; i<size-1 ; i++) {
        min_elem_index = i;
        for (int j = i+1; j<size; j++) {
            if(arr[j] < arr[min_elem_index]){
                min_elem_index = j;
            }
        }
        swapping(&arr[min_elem_index], &arr[i]);
    }
}