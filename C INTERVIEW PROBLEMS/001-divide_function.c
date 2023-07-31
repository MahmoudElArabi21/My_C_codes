/*
function to divide two numbers and do not forget to handle the case x/y and y =0
*/
#include <stdio.h>

void  divide_func(float a, float b){
    if(b == 0){
        printf("Can not divide on 0 \n");
    }
    else{
        printf("result of %.2f / %.2f = %.2f",  a, b,  (a/ b));
    }
}

int main () {
    divide_func(6,0);
}