#include <stdio.h>

void main() {
    for (int i = 0; i < 10; i++) {
        printf("I am currently in the outer loop\n");

        if (i > 5)
            break;

        for (int k = 0; k < 12; k += i % 2 + 1) {
            printf("I'm in the switch \n");
            switch (k)
            {
            case 2:
                printf("I'm in the 2 \n");
                break;

            case 5:
                printf("I didn't think I'd get this far\n");
                break;
            default:
                printf("easy come easy go here is the mod you are looking fo %d\n", k);
                break;
            }

            if (k > 11)
                break;

            printf("Leaveing inner loop %d K\n", k);
        }

        printf("Leaving outer loop %d i\n", i);
    }
}