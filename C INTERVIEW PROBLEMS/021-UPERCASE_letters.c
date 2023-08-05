#include <stdio.h>
#include <stdlib.h>
//a  97    z 122
void UPERRCASE (char arr[]){
    int i = 0;
    while (arr[i] != '\0') {
        if (arr[i] >96 && arr[i] <123) {
            arr[i] -= 32;
        }
        else {
            
        }
        i++;
    }
}
int main (){
    char yourstring[100];
    printf("letters : ");
    fgets(yourstring, 100, stdin);
    printf("%s\n", yourstring);
    UPERRCASE(yourstring);
    printf("%s\n", yourstring);
}