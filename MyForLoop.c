#include <stdio.h>

void TimeTable(int number) {
    printf("Time Table for %d \n", number);
    printf("------------------------\n");

    for (int i = 1; i <= 10; i++)
        printf("%d * %d = %d\n", number, i, number * i);

    printf("------------------------\n");
}

void main() {
    TimeTable(5);
    WhileMain();
}