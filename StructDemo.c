#include <stdio.h>
#include <stdlib.h>
#include "Employee.h"

int count = 20;

int main(int argsc, char* argsv[]) {

    //check is number of args are capable of holding a file
    if (argsc < 3) {
        printf("ERROR: Usage - <file path> <file out>");
        return 14;
    }

    //Try to asssign pointers to files
    FILE* fpName; 
    fopen_s(&fpName, argsv[1], "r");

    if (NULL == fpName) {
        printf("ERROR: process - Unable to find\\open text");
        return 404;
    }

    FILE* fpOutList;
    fopen_s(&fpOutList, argsv[2], "a");

    if (NULL == fpOutList) {
        printf("ERROR: process - Unable to find\\open text");
        fclose(fpName);
        return 404;
    }

    

    for(int i = 0; i < count; i++)
        Assign(i, fpName);

    for (int i = 0; i < count; i++) {
        printf("Employee ID: %d\nEmployee: %sSalary: %d\nOffice size %d * %d\n\n", staff[i].emploId, staff[i].name, staff[i].salary, staff[i].x, staff[i].y);
    }
    
    for (int i = 0; i < count; i++) {
        fprintf_s(fpOutList,"Employee ID: %d\nEmployee: %sSalary: %d\nOffice size %d * %d\n\n", staff[i].emploId, staff[i].name, staff[i].salary, staff[i].x, staff[i].y);
    }
    
    fclose(fpOutList);
    fclose(fpName);
    fpName = NULL;
    fpOutList = NULL;

}