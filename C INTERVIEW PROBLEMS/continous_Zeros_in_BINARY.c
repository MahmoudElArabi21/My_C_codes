/* Write a program to count most sequential zeros in a binary number
    Ex: 1001000010001000000   -->output : 6
*/

#include <stdio.h>

void return_zeros(char arr[100]){
    int i=0;
    int count =0, temp=0;
    while (arr[i] != '\0'){
        if(arr[i] != '1' && arr[i] != '0'){
            printf("element not 0 or 1\n");
            return;
        }
        i++;
    }
    for(int j =0; j < i+1 ; j++ ){
        if(arr[j] == '0'){
            count++;
        }
        else{
            if (count> temp){
                temp = count;
            }
            count = 0;
        }
    }    
    printf("Number of largest zeros is %d\n", temp);
}

int main(){
    char arr[100];
    scanf("%s", arr);
    return_zeros(arr);
}