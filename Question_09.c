/*TASK 9
 SIMPLE TRAFFIC SIGNAL
Take a signal letter (R, Y, G) as input and print the corresponding action (Stop, Wait, Go)
using switch.*/
#include <stdio.h>

int main() {
    char signal;
    printf("Enter the signal letter: \n");
    scanf(" %c", &signal);

    switch (signal)
    {
    case ('R'):
        printf("Stop");
        break;
    case ('Y'):
        printf("Wait");
        break;
    case('G'):
        printf("Go");
        break;

    default:
    printf("No signal received\n");
        break;
    }
    return 0;
}