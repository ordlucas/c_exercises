/* Exercise 2-6 */
#include <stdio.h>

unsigned setbits(unsigned, int, int, unsigned);
unsigned getbits(unsigned, int, int);

int main(void) {
    unsigned int x = getbits(18, 1, 2);
    unsigned int y = setbits(0xF0FA, 4, 3, 0x004a);
    printf("%x\n", x);
    printf("%x\n", y);
    return 0;
}

unsigned setbits(unsigned x, int p, int n, unsigned y) {
    unsigned y_p = (y & ~(~0 << n)) << (p - n + 1);     
    unsigned x_p = x & ~(~(0 << n) << (p + 1 - n));
    return x_p | y_p;
}

unsigned getbits(unsigned x, int p, int n) {
    return (x >> (p + 1 - n) & ~(~0 << n));
}