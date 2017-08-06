#include <stdio.h>

main() {
    int a = 10;
    int b = 4;

    if (b = 0)
        goto NICK;

    printf("%d / %d = %d\n", a, b, a / b);
        return 0;
    NICK:
        printf("Value can't be 0");

        return 0;

        // This code doesn't like goto
}