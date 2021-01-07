/* Exercise 2-5 from K&R. */
/* AUTHOR: ord */

#include <stdio.h>

int any(char[], char[]);

int main(void) {
    char s1[] = "hello world";
    char s2[] = "programming";

    int n = any(s1, s2);
    printf("%d\n", n);

    return 0;
}

int any(char s1[], char s2[]) {
    int i, j;
    
    for(i = 0; s1[i] != '\0'; i++)
        for(j = 0; s2[j] != '\0'; j++)
            if(s1[i] == s2[j])
                return i;
}