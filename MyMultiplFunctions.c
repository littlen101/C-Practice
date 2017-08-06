#include <stdio.h>

void SayHello() {
    printf("Why %s there %s, how are you\n", "Hello", "Nick");
}

int SumThese(int a, int b) {
    return a + b;
}
void main() {
    SayHello();
    int firstNum = 5;
    int secondNum = 10;

    printf("The sum of the two numbers are %d\n", SumThese(firstNum, secondNum));

    {
        //New Scope

        int firstNum = 35;
        int secondNum = 12;
        printf("Because we are in a new scope the sum is now %d instead of the previous number\n", SumThese(firstNum, secondNum));
    }

    printf("But not that we are out, the sum is now back to normal %d\n", SumThese(firstNum, secondNum));
}