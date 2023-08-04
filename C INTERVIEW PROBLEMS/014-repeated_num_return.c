// C function takes not sorted array contains numbers from 0 to 100.
// there is only one number repeated in the array, and shall return this

#include <stdio.h>

// 66 is the repeated number
int arr [101] = {66, 53, 1, 37, 11, 48, 24, 70, 78, 57, 23, 9, 47, 61, 33, 54,
                 92, 16, 44, 79, 50, 93, 7, 73, 65, 81, 69, 8, 30, 14, 100, 
                 58, 20, 49, 42, 38, 27, 85, 89, 17, 67, 56, 94, 3, 76, 26, 84, 
                 45, 82, 59, 66, 36, 75, 4, 35, 77, 90, 62, 19, 83, 41, 28, 43, 
                 72, 96, 6, 74, 51, 63, 29, 64, 52, 25, 22, 86, 68, 95, 21, 10, 
                 80, 15, 32, 18, 34, 60, 88, 40, 99, 46, 55, 87, 5, 13, 31, 12, 
                 97, 2, 71, 98, 39, 91};

void ret_repeated_num(int arr[], int size){
    for (int i =0; i<size-1; i++) {
        for (int j=i+1  ; j<size; j++) {
            if (arr[i] == arr[j]) {
                printf("the repeated number is %d", arr[j]);
                break;
            }
        }
    }
}
int main (){
    int size = sizeof(arr) / sizeof(arr[0]);
    ret_repeated_num(arr, size);
}