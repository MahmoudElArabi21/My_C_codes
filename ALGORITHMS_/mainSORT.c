#include <stdio.h>
#include <stdlib.h>

#include "sorting_algorithms.h"

void Print_My_Data(unsigned int my_array[], unsigned int array_length);

#define DATA_SIZE 10

int My_Data1[DATA_SIZE] = {8, 1, 9, 5, 0, 7, 3, 2, 4, 6};
int My_Data2[DATA_SIZE] = {8, 1, 9, 5, 0, 7, 3, 2, 4, 6};
int My_Data3[DATA_SIZE] = {8, 1, 9, 5, 0, 7, 3, 2, 4, 6};

// void bubble_sort(int *arr, int size);
// void sort_insertion (int arr[], int size);
// void sort_selection (int arr[], int size);

int main (){
    printf("\nBUBBLE SORT :\n");
    Print_My_Data(My_Data1, DATA_SIZE);
    sort_bubble(My_Data1, DATA_SIZE);
    Print_My_Data(My_Data1, DATA_SIZE);

    // printf("\nINSERTION SORT :\n");
    // Print_My_Data(My_Data2, DATA_SIZE);
    // sort_insertion(My_Data2, DATA_SIZE);
    // Print_My_Data(My_Data2, DATA_SIZE);

    printf("\nSELECTION SORT :\n");
    Print_My_Data(My_Data3, DATA_SIZE);
    sort_selection(My_Data3, DATA_SIZE);
    Print_My_Data(My_Data3, DATA_SIZE);
}


void Print_My_Data(unsigned int my_array[], unsigned int array_length){
    unsigned int Data_Counter = 0;
    for(Data_Counter=0; Data_Counter<array_length; Data_Counter++){
        printf("%i\t", my_array[Data_Counter]);
    }
    printf("\n");
}