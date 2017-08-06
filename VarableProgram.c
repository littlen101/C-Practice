#include <stdio.h>

void main() {
    int age = 19;
    char inital = 'N';
    int futureAge = age + 10;
    int unitedStatesAge = 2017 - 1776;
    double percentUnited = unitedStatesAge * 1.0;
    long double percentAge = (age / percentUnited) * 100;

    printf("My current age is %d and I will be %d in 10 years\n", age, futureAge);
    printf("My age percetage compared to the age of the United States --which is %d years old-- is %f percent\n", unitedStatesAge, percentAge);
}