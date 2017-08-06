#include <stdio.h>
#include <stdlib.h>

//bitwise stuff

void main() {
    unsigned int a = 4;
    unsigned int b = 5;

    printf("%d & %d = %d\n", a, b, a & b);
    printf("%d | %d = %d\n", a, b, a | b);
    printf("%d ^ %d = %d\n", a, b, a ^ b);

    printf("~%d = %d\n",a, ~a);


    printf("%d << %d = %d\n", a, b, a << b);
    printf("%d >> %d = %d\n", a, b, a >> b);
}