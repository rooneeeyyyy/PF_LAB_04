/*TASK 3
COMPARE TWO NUMBERS
Take two numbers as input and check if they are equal or which one is greater.*/
#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter the first number:\n");
    scanf("%d",&num1);
    printf("Enter the Second number:\n");
    scanf("%d",&num2);

    if (num1 == num2){
        printf("Both numbers are equal");
    }
    else if (num1 > num2){
        printf("The first number %d is greater than the second number %d",num1, num2);
    }
    else{
        printf("The second number %d is greater than the first number %d",num2,num1);
    }
}