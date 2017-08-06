#include <stdio.h>

/*

    Enum = Enumarated Data Types
    used to give names to defined constants i.e. give name to integer constants

    How to define enums
    enum <name> { enumarated_list } [varable name];
*/


enum Months {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

void main() {
    enum Months CurrentMonth;

    CurrentMonth = February;

    printf("February is %d in ordental numbering\n", CurrentMonth);
}