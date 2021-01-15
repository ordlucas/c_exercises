/* Exercise 3-2 */

#include <stdio.h>

void escape(char[], char[]);

int main(void) {
    char t[] = "hello\nworld";
    char s[20];
    escape(s, t);
    printf("%s\n", s);
}

void escape(char s[], char t[]) {
    int i;
    int j = 0;
    for(i = 0; t[i] != '\0'; i++) {
        switch(t[i]) {
            case '\n':
                s[j++] = '\\';
                s[j++] = 'n';
                break;
            case '\t':
                s[j++] = '\\';
                s[j++] = 't';
                break;
            default:
                s[j++] = t[i];
                break;
        }
    }
    s[j] = '\0';
}