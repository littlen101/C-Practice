#pragma once
#include <string.h>

int sum(int a, int b) {
    return a + b;
}

void replaceWord(char* sourse, char* replace) {
    strcpy_s(replace, 20, sourse);
}