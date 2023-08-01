/**
 Q--> write a function to write 1 or 0 to a certain bit in an integer number.
*/

#include <stdio.h>

void bit_sit(int *num, int pos){
    *num |= (1<<pos);
}
void bit_clear(int *num , int pos){
    *num &= ~(1<<pos);
}
void write_0_or_1_to_position(int num, int zero_or_one, int position){
    if (0 == zero_or_one) {
        bit_clear(&num, position);
        printf("your number after clear bit %d is %d\n", position, num);
    }
    else if (1 == zero_or_one) {
        bit_sit(&num, position);
        printf("your number after sit bit %d is %d\n", position, num);
    }
    else {
        //nothing
    }
}
int main () {
    write_0_or_1_to_position(15, 0, 1);
    write_0_or_1_to_position(14, 1, 0);
}