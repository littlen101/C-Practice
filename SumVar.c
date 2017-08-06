#include <stdio.h>
#include <stdarg.h>


int Sum(int count, ...) {
    int total = 0;

    va_list vl;

    va_start(vl, count);

    for (int i = 0; i < count; i++) {
        total += va_arg(vl, int);
    }


    va_end(vl);
    return total;
}

void main() {
    printf("%d\n", Sum(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10));
}
