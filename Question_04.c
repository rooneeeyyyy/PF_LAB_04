/*TASK 4
 FIND THE SMALLEST OF THREE NUMBERS
Take three numbers as input and find the smallest among them using nested if-else
statements.*/
#include<stdio.h>
int main(){
    int num1, num2, num3;
    printf("Enter the first number: \n");
    scanf("%d",&num1);
    printf("Enter the second number: \n");
    scanf("%d",&num2);
    printf("Enter the third number: \n");
    scanf("%d",&num3);

    if (num1 > num2){
        if (num1 > num3)
        {
            printf("The first number %d is the greatest.",num1);
        }
        else {
            printf("The third number %d is the gratest.",num3);
        }
        
    }
    else if(num2 > num3){
        printf("The second number %d is the greatest.", num2);}
    else{
        printf("The third number %d is the gratest.",num3);
    }
}