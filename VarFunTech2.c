#include <stdio.h>
#include <stdarg.h>


int Sum(int arg1, ...) {
    int total = arg1;

    va_list vl;

    va_start(vl, arg1);

    for (; ;) {
        int arg = va_arg(vl, int);
        if (arg == 0)
            break;
        total += arg;
    }


    va_end(vl);
    return total;
}

void main() {
    printf("%d\n", Sum(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0));
}