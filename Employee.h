#pragma once

struct Rectangle {
    int x;
    int y;
};

struct Employee
{
    int emploId;
    int salary;
    char name[20];
    struct Rectangle;
};

typedef struct Rectangle RECTANGLE;
typedef struct Employee EmInfo;

EmInfo staff[20];

void Assign(int i, FILE* fp);
extern int count;

