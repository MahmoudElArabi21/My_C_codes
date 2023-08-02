/*
C Function takes an array of integers and return number of prime
numbers inside the array
*/
// prime number --> a integer number > 0 and can't be devided except omn itself snd one
// EX : 2, 3, 5, 7, 11 

#include <stdio.h>

int is_prime (int num){
    if(num == 2 ){
        return 1;
    }
    else if (num >2) {
        for (int i = num-1 ; i>1 ; i--) {
        if((num %i) == 0){
            return -1;
        }
    }
    return 1;
    }
    else {
        return -1;
    }
}

void count_prime_in_array(int arr[], int size){
    int count = 0;
    for (int i=0; i<size; i++) {
        if(is_prime(arr[i]) == 1){
            count++;
        }
    }
    printf("number of prime in array is %d\n", count);
}
int main(){
    int My_Data1[14] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13};
    count_prime_in_array(My_Data1, 14); //number of prime in array is 6
}