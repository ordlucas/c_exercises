#include <stdio.h>

void squeeze(char[], int);
void squeeze_string(char[], char[]);

int main(void) {
    char s[] = "hello world";
    char t[] = "programming";
    squeeze_string(s, t);
    // squeeze(s, 'l');
    printf("%s\n", s);
}

void squeeze(char s[], int c) {
    int i, j;

    for(i = j = 0; s[i] != '\0'; i++)
        if(s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
}

void squeeze_string(char s[], char t[]) {
    int i, j, k;

    for(i = 0; t[i] != '\0'; i++) {
        for(j = k = 0; s[j] != '\0'; j++)
            if(s[j] != t[i])
                s[k++] = s[j];
        s[k] = '\0';
    }
}