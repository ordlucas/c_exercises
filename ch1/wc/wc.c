#include <stdio.h>

#define IN 1
#define OUT 0
#define WORD_LENGTH 20

int main(void) {
    int c, i, nl, nw, nc, state;
    char cw[WORD_LENGTH];
    for(i = 0; i < WORD_LENGTH; ++i) 
        cw[i] = '\0';

    state = OUT;
    nl = nw = nc = i = 0;
    while((c = getchar()) != EOF) {
        ++nc;
        cw[i] = c;
        ++i;
        if(c == '\n')
            ++nl;
        if(c == ' ' || c == '\n' || c == '\t') {
            i = 0;
            printf("%s\n", cw);
            for(int j = 0; j < WORD_LENGTH; ++j)
                cw[j] = '\0';
            state = OUT;
        }
        else if (state == OUT) { 
            state = IN;
            ++nw;
        }
    }

    printf("%d %d %d\n", nl, nw, nc);
}