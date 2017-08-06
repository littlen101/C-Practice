

#include <stdio.h>
#include <string.h>
#include <malloc.h> 

//all heap functions
// dynamic memory allocation

char* CombineStrings(char* p1, char* p2) {
    if (NULL == p1 || NULL == p2)
        return NULL;

    int stringLen = ((strlen(p1)) + (strlen(p2)));
    printf("p1 = %d p2 = %d stringLen = %d\n", strlen(p1), strlen(p2), stringLen);


    char* pResult = (char*) malloc(sizeof(char) * (stringLen + 2));

    printf("size of pResult = %d\n", sizeof(pResult));

    if (pResult == NULL)
        return NULL;


    //strcpy_s(pResult, stringLen + 1, p1);
    //strcat_s(pResult, stringLen + 1, p2);
    sprintf_s(pResult, stringLen + 2 ,"%s %s", p1, p2);

    return pResult;
}

int main(int argsc, char* argsv[]) {

    char* firstString = argsv[1] ;
    char* secondString = argsv[2] ;

    printf("first string = %s\nSecond String = %s\n", firstString, secondString);

    char* cobStr = CombineStrings(firstString, secondString);

    if (cobStr != NULL) {
        printf("Result = %s\n", cobStr);
        free(cobStr);
        cobStr = NULL;
    }
}