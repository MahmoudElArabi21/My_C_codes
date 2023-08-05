// C function to check if string mirror or not
#include <stdio.h>

void string_is_mirror(char arr[], int size){
    if ((size%2) ==0) {
        printf("NOT mirror\n");
    }
    else {
        int i, j;
        int cmp_index = size/2 ;
        for (i = cmp_index-1, j = cmp_index ; i>=0;i--, j++) {
            if (arr[i] != arr[j]) {
                printf("NOT mirror");
                return;
            }
        }
        printf("its mirror");
    }
}
int  main(){
    char str[] = "kkkkMAHMOUDDUOMHAMkkkk";
    int size =  sizeof(str)/ sizeof(str[0]);
    string_is_mirror(str, size);    

}