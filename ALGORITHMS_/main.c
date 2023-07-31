#include <stdio.h>
#include <stdlib.h>
#include "search_algotithms.h"



#define DATA_SIZE 10
sint32 My_Data[DATA_SIZE] = {11, 22, 33, 44, 55, 66, 77, 88 ,99 ,100};

// sint32 linear_search(sint32 *arr, uint32 arr_size, sint32 element);
// sint32 linear_search_both_sides(sint32 *arr, uint32 arr_size, sint32 element);
// sint32 binary_search(sint32 *arr, uint32 arr_size, sint32 element);


int main (){
    printf("%d\n", linear_search(My_Data, DATA_SIZE, 33));
    printf("%d\n", linear_search(My_Data, DATA_SIZE, 200));
    printf("%d\n", linear_search_both_sides(My_Data, DATA_SIZE, 55));
    printf("%d\n", linear_search_both_sides(My_Data, DATA_SIZE, 200));
    printf("%d\n", binary_search(My_Data, DATA_SIZE, 99));
    printf("%d\n", binary_search(My_Data, DATA_SIZE, 200));
    printf("%d\n", binary_search(My_Data, DATA_SIZE, 20));


}

