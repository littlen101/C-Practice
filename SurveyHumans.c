#include <stdio.h>
#include <stdlib.h>

void main() {
    char name[21];
    int age;

    printf("Hello what is your name: ");
    scanf_s(" %s", name , 20);

    printf("\nWell hi %s nice to meet you, how old are you: ", name);
    scanf_s(" %d", &age);

    printf("\nWell this is great information\n");
    printf("So %s you are %d years old that is crazy\n", name, age);


}