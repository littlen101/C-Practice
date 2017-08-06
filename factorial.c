#include <stdio.h>

int Factorial(int n) {

    if (n == 1 || n == 0)
        return 1;
    return n * Factorial(n - 1);
}

void main() {
    printf("What number would you like the factorial of : ");
    int fact;
    scanf_s(" %d", &fact);

    int Result = Factorial(fact);

    printf("The factorial for %d = %d\n", fact, Result);
}