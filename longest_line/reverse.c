#include <stdio.h>
#define MAXLINE 100

void reverse(char line[], char line_rev[], int len);
int get_line(char line[], int lim);

int main(void) {
    int len;
    char line[MAXLINE], line_rev[MAXLINE];
    
    while((len = get_line(line, MAXLINE)) > 0) {
        for(int i = 0; i < MAXLINE; ++i)
            line_rev[i] = '\0';
        reverse(line, line_rev, len);
        printf("%s\n", line_rev);
    }

    return 0;
}

int get_line(char s[], int lim) {
    int c, i;
    for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) 
        s[i] = c;
    if(c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void reverse(char s[], char s_rev[], int len) {
    int i, j;
    j = 0;
    for(i = len - 1; i >= 0; --i) {
        if(s[i] != '\n') {
            s_rev[j] = s[i];
            ++j;
        }
    }
    s_rev[j] = '\0';     
}

