#include <stdio.h>

#define IN 1
#define OUT 0

int main(void) {
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while((c = getchar()) != EOF) {
        putchar(c);
        ++nc;
        if(c == '\n')
            ++nl;
        if(c == ' ' || c == '\n' || c == '\t') {
            putchar('\n');
            state = OUT;
        }
        else if (state == OUT) { 
            state = IN;
            ++nw;
        }
    }

    printf("%d %d %d\n", nl, nw, nc);
}