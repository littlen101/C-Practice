#include <stdio.h>
#include <stdlib.h>


//read files

int main(int argsc, char* argsv[]) {
    // Check to see if there are enough arguments for a file to exsist
    if (argsc < 2) {
        printf("ERROR: Usage - ReadFile.exe <filename> \n");
        return 14;
    }

    // Try to open file in read mode
    FILE* fp;
    fopen_s(&fp,argsv[1], "r");

    if (fp == NULL) {
        printf("ERROR: Process - Failed to open file %s\n", argsv[1]);
        return 404;
    }

    //Read from file as long as data exsists
    while (!feof(fp))
    {
        //read one char at a time
        int c = fgetc(fp);
        printf("%c", c);
    }
    printf("\n");
    //Close file and null pointer
    fclose(fp);
    fp = NULL;


}