#include <stdio.h>

void main()
{
    int a = 123;
    int* p = &a;
    int b = *p;
    b++;
    *p++;
    p = &a;
    printf("%d, %d, %d", a, b, *p);
}