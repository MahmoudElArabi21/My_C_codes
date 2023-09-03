//Write a function which, given a string and check if any character is repeated

#include <stdio.h>
#include <stdlib.h>

void is_char_repeated(char arr[]){
    int i =0;
    int flag = 0;
    while (arr[i]) {
        for (int j =i+1; arr[j]!= '\0'; j++ ) {
            if (arr[i] == arr[j]) {
                printf("this char is repeated %c\n", arr[i]);
                flag = 1;
            }
        }
        i++;
    }
    if(flag == 0){
        printf("no repeated\n");
    }
}
int main (){
    char str[100];
    printf("enter: ");
    fgets(str, 100, stdin);
    is_char_repeated(str);
}
