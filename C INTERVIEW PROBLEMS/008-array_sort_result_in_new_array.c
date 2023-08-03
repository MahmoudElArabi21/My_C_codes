// C Code to sort array and put the result in a new array.

#include <stdio.h>

void print_array (int arr[], int size){
    for (int i=0; i<size; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
void swapping(int*a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sort_in_new_array(int old[], int new[], int size){
    int temp_arr[size] ;
    for (int i=0; i<size; i++) {
        temp_arr[i] = old[i];
    }
    int flag = 0;
    for (int i=0; i< size-1 ; i++) {
        for (int j=0; j<size-1-i; j++) {
            if (old[j] > old[j+1]) {
                swapping(&old[j], &old[j+1]);
                flag = 1;
            }
        }
        if (flag == 0) {
            break;
        }
    }
    for (int i=0; i<size; i++) {
        new[i] = old[i] ;
    }
    for (int i=0; i<size; i++) {
        old[i] = temp_arr[i] ;
    }
}

int main(){
    int old_array[10] = {5,9,7,6,8,3,2,1,4,0};
    int new_array[10] = {0};
    sort_in_new_array(old_array, new_array, 10);
    print_array(old_array, 10); //5       9       7       6       8       3       2       1       4       0
    print_array(new_array, 10); //0       1       2       3       4       5       6       7       8       9
}
