#include <stdio.h>
#include <Windows.h>

void main(int argsc, char* argsv[]) {
    int first = (int)argsv[1];
    int second = (int)argsv[2];

    printf("The sum of %d and %d is %d\n", first, second, first + second);

    int sumTotal = 0;

    for (int i = 1; i < ARRAYSIZE(argsv); i++) {
        sumTotal += (int)argsv[i];
    }

    printf("The total of all the arguments is %d\n", sumTotal);
}