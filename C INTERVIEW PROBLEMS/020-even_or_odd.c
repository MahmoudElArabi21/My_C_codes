#include <stdio.h>
#include <stdlib.h>

int is_even (int x){
    if (x %2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}
int main (){
    int x =0;
    printf("Enter your number: ");
    scanf("%d", &x);
    int ret = is_even(x);
    if(ret == 1) {printf("its even");}
    else if (ret == 0) {
        printf("its odd");
    }
    else {
        printf("ERR");
    }
}