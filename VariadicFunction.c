#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>


int Sum(int count) {
    static int total = 0;
    total += count;

    return total;
}

void main(int argsc, char* argsv[]) {
    int total = 0;
    for (int i = 1; i < argsc; i++) {
        int holder = atoi(argsv[i]);
        total = Sum(holder);
    }

    printf("Result = %d\n", total);
}