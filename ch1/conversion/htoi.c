#include <stdio.h>
#include <ctype.h>

#define YES 1
#define NO 0

int htoi(char[]);

int main(void) {
    char s[] = "0x444";
    int n = htoi(s);

    printf("%d\n", n);

    return 0;   
}

int htoi(char s[]) {
    int hexdigit, i, inhex, n;

    i = 0;
    /* skip first two digits */
    if(s[i] == '0') {
        ++i;
        if(s[i] == 'x' || s[i] == 'X')
            ++i;
    }

    n = 0;
    inhex = YES;
    for( ; inhex == YES; ++i) {
        /* uses ctype.h isdigit function */
        if(isdigit(s[i]))
            hexdigit = s[i] - '0';
        /* checks if character is an uppercase valid hex digit */
        else if(s[i] >= 'A' && s[i] <= 'F')
            hexdigit = s[i] - 'A' + 10;
        /* checks if character is a lowercase valid hex digit */
        else if (s[i] >= 'a' && s[i] <= 'f')
            hexdigit = s[i] - 'a' + 10;
        /* character is not a valid hex digit */
        else
            inhex = NO;
        
        /* calculate current hex number */
        if(inhex == YES)
            n = 16 * n + hexdigit;
    }

    return n;
}
