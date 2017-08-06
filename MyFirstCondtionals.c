#include <stdio.h>


/*
    Blood Pressure Catagorty  | Systolic      | Diastolic

    Normal                      < 120        &&  < 80
    Prehypertention             120 - 139    ||  80 - 89   
    High Blood Pressure S1      140 - 159    ||  90 - 99
    High Blood Pressure S2      160 - 180    ||  100 - 110
    Hypertensive Crisis         > 180        ||  > 110
*/

void HeartCheck(int systolic, int diastolic) {
    printf("Checking %d and %d\n", systolic, diastolic);
    if ((systolic > 180) || (diastolic > 110)) {
        printf("Get to an emergency room NOW!! You are in Hypertensive Crisis\n");
    }
    else if ((systolic <= 180 && systolic >= 160) || (diastolic <= 110 && diastolic >= 100)) {
        printf("See medical attetnion and a better lifestyle, You are in Stage 2 Hypertention\n");
    }
    else if ((systolic <= 159 && systolic >= 140) || (diastolic <= 99 && diastolic >= 90)) {
        printf("Consider mediacal attetnion as we as a better life style you are in Stage 1 of Hypertention\n");
    }
    else if ((systolic <= 139 || systolic >= 120) && (diastolic <= 89 && diastolic >= 80)) {
        printf("Consider a life style change at, you are currently at PreHypertention stage\n");
    }
    else if ((systolic < 120 && diastolic < 80)) {
        printf("You are perfectly normal\n");
    }
    else {
        printf("A condtional slipped through the cracks\n");
    }
}

void MySwitch(int wD) {
    switch (wD)
    {
    default:
        break;

    case 1:
        printf("Monday\n");
        break;

    case 2:
        printf("Tuesday\n");
        break;

    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;

    case 5:
        printf("Friday\n");
        break;

    }
}


void main() {

    HeartCheck(120, 80);
    HeartCheck(156, 90);
    HeartCheck(198, 100);
    HeartCheck(110, 100);

    int number = 10;
    int secondNum = 25;

    if (number % secondNum == 10) {
        printf("You remember mod math\n");
    }
    else {
        printf("You are slaking, figure it out\n");
        printf("The answer was %d try to understand why\n", number % secondNum);
    }

    printf("Practicing the turnary operator or Condtional statement ? : %d if number < secondNum\n", (number < secondNum) ? 1 : 0);

    printf("Current Working day is ");
    MySwitch(5);
}