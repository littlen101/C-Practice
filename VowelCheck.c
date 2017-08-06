#include <stdio.h>

const int TRUE = 1;
const int FALSE = 0;

int CheckVow(char point) {
    switch (point)
    {
        case ('a'):
        case ('e'):
        case ('i'):
        case ('o'):
        case ('u'):
        case ('A'):
        case ('E'):
        case ('I'):
        case ('O'):
        case ('U'):
            return TRUE;
    }

    return FALSE;
}
void RemoveVowel(char * point) {
    char* pointDest = point;

    while (*point) {
        if (!(CheckVow(*point))) {
            *pointDest++ = *point;
        }
        point++;
    }

    pointDest = '\0';
}

void main() {
    char str[] = { "Hello, World" };

    int size = sizeof(str) / sizeof(*str);

    for (int i = 0; i < size; i++) {
        if (CheckVow(str[i])) {
            printf("%c", str[i]);
        }
    }

    RemoveVowel(str);

    printf("\n%s\n", str);

}