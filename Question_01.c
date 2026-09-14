/*TASK 1. CHECK VOTING ELIGIBILITY
Take age as input and check if the person is eligible to vote (age 18 or above).*/
#include<stdio.h>
int main(){
    int age;
    printf("Enter the age: \n");
    scanf("%d",&age);
    if (age >= 18){
        printf("You are eligible to vote.");
    
    }
    else{
        printf("You are not eligible to vote!");
    }
}