#include <stdio.h>

void main() {
    int i = 0;
    do {
        printf("This is the menu page\n");
        printf("We will print until we can't anymore %d more time(s)\n", 5 - i++);

    } while (i < 5);


}