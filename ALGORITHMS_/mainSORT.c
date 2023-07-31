#include <stdio.h>
#include <stdlib.h>

#include "sorting_algorithms.h"

void Print_My_Data(unsigned int my_array[], unsigned int array_length);

#define DATA_SIZE 10

int My_Data1[DATA_SIZE] = {8, 1, 9, 5, 0, 7, 3, 2, 4, 6};

//void bubble_sort(int *arr, int size);

int main (){
    Print_My_Data(My_Data1, DATA_SIZE);
    bubble_sort(My_Data1, DATA_SIZE);
    Print_My_Data(My_Data1, DATA_SIZE);
}


void Print_My_Data(unsigned int my_array[], unsigned int array_length){
    unsigned int Data_Counter = 0;
    for(Data_Counter=0; Data_Counter<array_length; Data_Counter++){
        printf("%i\t", my_array[Data_Counter]);
    }
    printf("\n");
}