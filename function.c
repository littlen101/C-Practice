#include <stdio.h>

void printMax(int a, int b) {
    if (a < b) {
        printf("%d\n", b);
    }
    else
        printf("%d\n", a);
}