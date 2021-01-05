#include <stdio.h>
#define MAXLINE 100

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

/* Prints all lines from stdin that are longer than 80 characters */
int main(void) {
    int len, max;
    char c;
    char line[MAXLINE], longest[MAXLINE];

    max = 0;
    while((len = get_line(line, MAXLINE)) > 0) {
        /* checks if the line from getline is longer than MAXLINE */
        if(line[len - 1] != '\n') {
            while((c = getchar() ) != EOF && c != '\n')
                ++len;
        }
        
        if(len > 80) {
            printf("%d %s", len, line);
        }
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

void copy(char to[], char from[]) {
    int i = 0;
    while((to[i] = from[i]) != '\0')
        ++i;
}