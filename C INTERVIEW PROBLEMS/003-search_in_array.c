#include <stdio.h>
#include <stdlib.h>

void linear_search (int element, int arr[], int size);
void binary_search (int element, int arr[], int size);

int main(){
    int My_Data[10] = {8, 1, 9, 5, 0, 7, 3, 2, 4, 6};
    int My_Data1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    linear_search(15, My_Data, 10);
    binary_search(7, My_Data1, 10);
}

void linear_search (int element, int arr[], int size){
    int index = -1;
    for(int i =0; i< size; i++){
        if (element == arr[i]){
            index = i;
            break;;
        }
    }
    if (index == -1){
        printf("NOT found \n");
        }
    else{
        {
        printf("foungd at index %d\n", index);
        }
    }
}

void binary_search (int element, int arr[], int size){
    int si = 0, ei =size-1 , mi =0, index =-1;
    while (si <= ei) {
        mi = si + (ei - si ) /2;
        if (arr[mi] == element) {
            index = mi;
            break;
        }
        else if (arr[mi] < element) {
            si = mi +1;
        }   
        else {
            ei = mi -1;
        }
    }
    if (index == -1) {
        printf("Not found");
    }
    else {
        printf ("found at index %d", index);
    }
}
