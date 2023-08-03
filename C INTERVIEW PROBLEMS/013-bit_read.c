#include <stdio.h>

#define bit_set(reg, pos) (reg |= (1<<pos))
#define bit_clear(reg, pos) (reg &= ~(1<<pos))
#define bit_togel(reg, pos) (reg ^= (1<<pos))
#define bit_read(reg, pos)  ((reg>>pos) & 1)
int main(){
    int x = 5;
    int y = bit_read(x, 0);
    printf("%d", y);
}