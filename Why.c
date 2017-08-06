#include <stdio.h>


void swap(int* a, int* b){
    
    printf("Here are the pointer values: a = %p and b = %p\n", a, b);
    
    int temp = *a;

    //printf("temp is pointing to %p\n", temp);

    *a = *b;
    //printf("a is now pointing to %p\n", a);

    *b = temp;
    //printf("b is now pointing to %p\n", b);
}

void printInts(int* pArry, int count) {
    for (int i = 0; i < count; i++, pArry++) {
        printf("%d\n", *pArry);
    }
}
void main() {
    int a = 10;
    int b = 20;

   /* int* pa = &a;
    int* pb = &b;*/

    printf("the is the a address %p and this is the b address %p\n", &a, &b);
    /*printf("the is the a pointer %p and this is the b pointer %p\n", pa, pb);
    printf("the is the a pointer content %d and this is the b pointer contents %d\n", *pa, *pb);*/

    int arr[] = { 10,22,18,65,74,92,36 };
    int count = sizeof(arr) / sizeof(*arr);

    printInts(arr, count);


    swap( &a, &b);

    printf("address of a = %p and address of b = %p\n", &a, &b);

    printf("a = %d and b = %d\n", a, b);
}