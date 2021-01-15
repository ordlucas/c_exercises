/* Exercise 3-3 */
/* This one is hard so I pulled this from the C answer book */
#include <stdio.h>

void expand(char[], char[]);

int main(void) {
    char s[] = "a-z-";
    char t[100];
    expand(s, t);
    printf("%s\n", t);
    return 0;
}

void expand(char s1[], char s2[]) {
    char c;
    int i, j;

    i = j = 0;

    while((c = s1[i++]) != '\0')
        if(s1[i] == '-' && s1[i+1] >= c) {
            i++;
            while(c < s1[i])
                s2[j++] = c++;
        } else 
            s2[j++] = c;
    s2[j] = '\0';
}