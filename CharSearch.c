#include <stdio.h>
#include <string.h>


void main() {
    char str[] = "This is my test string for the code.";
    
    printf("%d size of string\n", sizeof(str));
    char * finder;

  /*  if (finder == NULL)
        printf("There is no y in this string\n");
    else
        printf("We found your y at index %d\n", finder - str);

    printf("Now we will find all instances of t in the string \"%s\"\n", str);

    finder = str;*/
    int strSize = sizeof(str);
    int numChar = 0;

    finder = strchr(str, 'i');

    printf("The string has %d characters\n", strSize - 1);
    while (*finder)
    {   
        finder = strchr(finder, 't');
        if (finder == NULL)
        {
            break;
        }
        else
        {
            printf("This is instance number %d of char t at index %d\n", ++numChar, finder - str);
            finder++;
        }
    }

    printf("There were %d instances of char t\n", numChar);

}