#include <stdio.h>


int main (){
    int num = 9;   //--> 1001
    printf ("%d\t", num &1);
    printf ("%d\t", num>>1 &0x01);
    printf ("%d\t", num>>2 &0x01);
    printf ("%d\t", num>>3 &0x01);
}