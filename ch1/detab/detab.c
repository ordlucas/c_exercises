#include <stdio.h>

#define SPACES 1

/* Replaces tabs with the number of spaces defined above */
int main(void) {
    char c;
    while((c = getchar()) != EOF) {
        if(c == '\t')
            for(int i = 0; i < SPACES; ++i)
                putchar(' ');
        else
            putchar(c);
    }
    putchar('\n');
    return 0;
}