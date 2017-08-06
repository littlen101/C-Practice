#include <stdio.h>
#define BUILD_VERSION "1.0.0"
#define ISFALSE(x) x = 0 ? 1 : 0

int main() {
    int test1;
    int test2;

    printf("Please input two number < 1000 the first greater than the latter : ");
    scanf_s(" %d", &test1);
    scanf_s(" %d", &test2);

    int bool = (test1 < test2) ? 0 : 1;

    if (ISFALSE(bool)) {
        printf("The numbers given do not follow the format given\n");
        return 14;
    }

    printf("Thank you for your time, the is build version %s\n", BUILD_VERSION);
}