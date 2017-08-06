#include <stdio.h>

void main() {
    int myTwo[3][2] = { {3 , 2},
                     {4 , 5},
                     {7 , 9} 
                    };

    for (int i = 0; i < 3; i++) {
        for (int k = 0; k < 2; k++) {
            printf("%d", myTwo[i][k]);
        }
        printf("\n");
    }

    printf("size of array %d\nSize of array[] %d\nSize of array[][] %d\n", sizeof(myTwo), sizeof(myTwo[0]), sizeof(myTwo[0][0]));

    int columnSize = sizeof(myTwo[0]) / sizeof(myTwo[0][0]);
    int rowSize = sizeof(myTwo) / columnSize / sizeof(myTwo[0][0]);

    printf("Here are the results\nThe size of the columns are %d\nThe size of the rows are %d\n",columnSize,rowSize);
}