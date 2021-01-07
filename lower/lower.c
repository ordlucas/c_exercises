/* Exercise 2-10 */

#include <stdio.h>

int lower(char[]);

int main(void) {
    char s[] = "Hello World!";
    lower(s);
    printf("%s\n", s);
}

int lower(char s[]) {
    int i;
    for(i = 0; s[i] != '\0'; i++) 
        s[i] = (s[i] >= 'A' && s[i] <= 'Z') ? (s[i] + 'a' - 'A') : s[i];
}