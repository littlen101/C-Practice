#include <stdio.h>
#include "MyHead.h"

#define OS WINDOWS 

#define STATE(x) printf("Your OS was WINDOWS now its %s\n", x)


#ifdef OS

    void main() {
    #if OS == WINDOWS
        printf("Hello on Windows\n");

    #elif OS == MAC
        printf("Hello on Mac\n");
    #endif

    char OSc[10];
    printf("Please enter new OS\n");
    scanf_s(" %s", OSc, 9);
    STATE(OSc);
    fseek(stdin, 0, SEEK_END);

    char sentence[20] = { "Doesn't Matter\n" };
    char newSen[20] = { "It replaced it\n" };

    replaceWord(newSen, sentence);

    printf("%s", sentence);
    }
#endif