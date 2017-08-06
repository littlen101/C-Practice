#include <stdio.h>

void main() {
    // Arethmatic Expressions
    
    int trail = (75 + 3) * 5;

    // Different Ops

    int mods = (50 % 7) * (5 % 2);

    // All float numbers are considered double which is why there is a 'f' to get rid
    // of the error loss of daa
    float totals = (trail - 25) / (mods * 2.0f);

    printf("trial is %d -- mods is %d -- totals is %f\n", trail, mods, totals);
}