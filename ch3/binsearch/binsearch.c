/* Exercise 3-1 */
#include <stdio.h>

#define SIZE 25

int binsearch(int, int[], int);

int main(void) {
    int x[SIZE];
    for(int i = 0; i < SIZE; i++)
        x[i] = i + 1;
    int n = binsearch(9, x, SIZE);
    printf("%d\n", n);
}

int binsearch(int x, int v[], int n) {
    int low, high, mid, comp;

    low = comp = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;
        if(x < v[mid]) {
            high = mid - 1;
            printf("Comparisons: %d\n", comp += 1);
        }
        else if (x > v[mid]) {
            low = mid + 1;
            printf("Comparisons: %d\n", comp += 2);
        }
        else {
            printf("Comparisons: %d\n", comp += 2);
            return mid;
        }
    }

    return -1;
}

int binsearch_improved(int x, int v[], int n) {
    int low, high, mid, comp;

    low = comp = 0;
    high = n - 1;
    mid = (low + high) / 2;

    while(low <= high && x != v[mid]) {
        if(x < v[mid]) {
            high = mid - 1;
            printf("Comparisons: %d\n", comp += 1);
        }
        else {
            low = mid + 1;
            printf("Comparisons: %d\n", comp += 2);
        }
    }

    if(x == v[mid])
        return mid;
    else
        return -1;
}