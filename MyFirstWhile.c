#include <stdio.h>

//This nifty loop

void PrintHex(int Wnumber) {

    while (Wnumber < 16){
        printf("%d = %x\n", Wnumber, Wnumber);
        Wnumber++;
    }
}

void WhileMain() {
    PrintHex(0);
}