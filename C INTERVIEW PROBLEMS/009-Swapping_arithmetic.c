// C function to swap two variables using arithmetic operation.

#include <stdio.h>

void swapping (int *a, int *b){
    *a = *a +*b;
    *b = *a - *b;
    *a = *a - *b;
}
int main(){
    int x = 11;
    int y = 22;
    swapping(&x, &y);
    printf("x = %d, y = %d", x, y);
}