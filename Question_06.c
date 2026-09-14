/*TASK 6
BASIC ARITHMETIC OPERATIONS
Take two numbers and an operator (+, -, *, /) as input and use switch to perform the
operation and print the result.*/
#include<stdio.h>
int main(){
    int num1, num2;
    float result;
    char operator;
    printf("Enter the first number:\n");
    scanf("%d", &num1);
    printf("Enter the second number:\n");
    scanf("%d", &num2);
    printf("Enter the operator:\n");
    scanf(" %c", &operator);

    switch (operator)
    {
    case ('+'):{
        result = num1 + num1;
        printf("The result after adding the two number is: %f",result);}
        break;
    case ('-'):{
        result = num1 - num2;
        printf("The result after subtracting the two number is: %f",result);}
        break;
    case ('*'):{
        result = num1 * num2;
        printf("The result after multiplying the two number is: %f",result);}

        break;
    case ('/'):{
        result = num1 / num2;
        printf("The result after dividing the two number is: %f",result);}
        break;
    
        default:
        
        break;
        printf("Unauthorized Operator");
        
    }
}