/*TASK 10
 NUMBER TO WEEKDAY NAME
Take a number (1–7) as input and use switch to print the weekday name, with a default
case for invalid input.*/
#include <stdio.h>

int main() {
    int weekday;
    printf("Enter the number to display weekday name:\n");
    scanf(" %d", &weekday);

    switch (weekday)
    {
    case (1):
        printf("Monday");
        break;
    case (2):
        printf("Tuesday");
        break;
    case (3):
        printf("Wednesday");
        break;
    case (4):
        printf("Thursday");
        break;
    case (5):
        printf("Friday");
        break;
    case (6):
        printf("Saturday");
        break;
    case (7):
        printf("Sunday");
        break;
    default:
        printf("Invalid number is input!");
        break;
    }
    return 0;
}