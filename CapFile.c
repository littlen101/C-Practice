//Take <input File> contents and capitalize it then write to <output File>

#include <stdio.h>
#include <stdlib.h>

int main(int argsc, char* argsv[]) {

    //Check to make sure number of argments is large enough to include files
    if (argsc < 3) {
        printf("ERROR: Usage - <input> <output> needed\n");
        return 14;
    }

    //Try to open file
    FILE* fpRead;
    fopen_s(&fpRead, argsv[1], "r");

    FILE* fpWrite;
    fopen_s(&fpWrite, argsv[2], "w");

    if (fpRead == NULL) {
        printf("ERROR: Process - failed to open\\find input file %s\n", argsv[1]);
        fclose(fpWrite);
        return 404;
    }

    //read file and write to new file

    while (!feof(fpRead))
    {
        char c = fgetc(fpRead);
        if (EOF == c)
            break;

        if (c >= 'a' && c <= 'z') 
            c = c - 'a' + 'A';

        fputc(c, fpWrite);        
    }

    //close file

    fclose(fpRead);
    fclose(fpWrite);
}