#include <stdio.h>

void main() {
    for (int i = 0; i < 101; i++) {
        
        if (i % 3 == 0)
            continue;

        if(i % 5 == 0)
            printf("%d\n", i);
    }
}