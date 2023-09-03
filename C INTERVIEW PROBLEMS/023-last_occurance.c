#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void last_occurance(char arr[], char x){
    char * ptr = NULL ;
    ptr = strrchr(arr, x);
    if (ptr) {
        printf("last position is %d \n", ptr-arr);
    }
    else {
        printf("not found");
    }
}

int main (){
    char text [] = "Mahmoud El arabi";
    last_occurance(text, 'i');
}

