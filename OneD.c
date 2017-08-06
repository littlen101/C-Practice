#include <stdio.h>

int SumThis(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[0];
    }
}

void main() {
    int a[5] = { 1,2,3,4,5 };
    int sum = 0;
    int max = a[0];
    int min = a[0];


    printf("The sum of the numbers = %d\n", SumThis(a, 5));

    for (int i = 0; i < 5; i++) {
        printf("Index %d = %d in the array\n", i, a[i]);

        if (max < a[i])
            max = a[i];

        if (min > a[i])
            min = a[i];
    }

    printf("The max of the set is %d\n", max);
    printf("The min of the set is %d\n", min);

    printf("\n\nThese are some type sizes\nThis the size of the array %d\nThis is the size of array[0] %d\nThis is int %d\n", sizeof(a), sizeof(a[0]), sizeof(int));
    printf("Tis is the size of the array %d\n", sizeof(a) / sizeof(a[0]));
}