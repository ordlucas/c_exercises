#include <stdio.h>
#include <ctype.h>

int atoi(char[]);

int main(void) {
    char s[] = "999";
    int n = atoi(s);

    printf("%d\n", n);

    return 0;
}

int atoi(char s[]) {
    int i, n;

    n = 0;
    for(i = 0; isdigit(s[i]); ++i)
        n = 10 * n + (s[i] - '0');
    return n;
}