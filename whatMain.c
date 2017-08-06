#include <stdio.h>
#include <Windows.h>
void main(int argsc, char* argsv[]) {
    printf("the number of args is %d\n", argsc);


    for (int i = 0; i < ARRAYSIZE(argsv); i++)
        printf("Args[%d] = %s\n", i, argsv[i]);
}