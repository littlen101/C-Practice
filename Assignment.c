#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Employee.h"

enum POSTION
{
    ENGINEER = 105273,
    SALES = 75249,
    MARKETING,
    INTERN = 31000,
    VP = 250145,
    FOUNDER = 700000000
};

void Assign(int i, FILE* fp) {
    int salary;
    int idNum;
    
    if (i != 0)
        idNum = 10075000 + ((count * (count / 10)) % i);
    else
        idNum = 10075000 + ((count * (count / 10)) % 55);

    staff[i].emploId = idNum;

    switch (i)
    {
    case 1:
    case 5:
    case 10:
    case 15:
        staff[i].x = 24;
        staff[i].y = 40;
        salary = ENGINEER;
        break;
    case 2:
    case 4:
    case 9:
    case 7:
    case 14:
        staff[i].x = 24;
        staff[i].y = 30;
        salary = SALES;
        break;
    case 6:
    case 12:
    case 18:
    case 16:
        staff[i].x = 24;
        staff[i].y = 25;
        salary = MARKETING;
    case 3:
    case 8:
        staff[i].x = 48;
        staff[i].y = 52;
        salary = VP;
        break;
    case 0:
        staff[i].x = 120;
        staff[i].y = 200;
        salary = FOUNDER;
    default:
        staff[i].x = 13;
        staff[i].y = 20;
        salary = INTERN;
        break;
    }

    staff[i].salary = salary;

    char name[20];
    fgets(name, 20, fp);

    strcpy_s(staff[i].name, 20, name);
}