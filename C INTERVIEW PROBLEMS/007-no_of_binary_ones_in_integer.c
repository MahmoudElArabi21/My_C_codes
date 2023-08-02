
// C Function takes integer and returns the number of ones in the binary of this integer.

#include <stdio.h>

void count_converted_integer_to_binary_ones (int x, int binary[]){
    int count =0;
    if (x == 0){
        printf("--> 0\n");
    }
    else /*if(x>0)*/ {
        int index = 0;
        while (x > 0) {
            binary[index] = x%2;
            x /= 2;
            index ++;
        }
        for (int i=index-1; i>=0 ; i--) {
            printf("%d", binary[i]);
            if (binary[i] == 1) {
                count++;
            }
        }
        printf(" -->number of ones is %d", count);
    }
}
int main(){
    int x = 0;
    int arr_bin[32] = {0};
    printf("Enter an integer number: ");
    scanf("%d", &x);
    count_converted_integer_to_binary_ones(x, arr_bin);
}