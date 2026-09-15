/*TASK 7
 PRINT MONTH NAME
Take a month number (1-12) as input and print the corresponding month name using
switch.*/
#include<stdio.h>
int main(){
    int Month;
    printf("Enter the number of month: \n");
    scanf("%d",&Month);

    switch (Month){
        case (1):
            printf("January");
            break;

        case (2):
            printf("February");
            break;
        case (3):
            printf("March");
            break;
        case (4):
            printf("April");
            break;
        case (5):
            printf("May");
            break;
        case (6):
            printf("June");
            break;
        case (7):
            printf("July");
            break;
        case (8):
            printf("August");
            break;
        case (9):
            printf("September");
            break;
        case (10):
            printf("October");
            break;
        case (11):
            printf("November");
            break;
        case (12):
            printf("December");
            break;
        default:
            printf("Wrong input");
            break;
    }
}