/*TASK 2
 CHECK NUMBER DIVISIBILITY
Take a number as input and check if it is divisible by both 3 and 5.*/
#include<stdio.h>
int main(){
    int num;
    float div3, div5;
    printf("Enter the number:\n");
    scanf("%d",&num);
    div3 = num % 3;
    div5 = num % 5;
    if (div3 == 0.00){
    
        if(div5 == 0.00){
            printf("The number is divisible by both 3 and 5.");
        }
        else{
        printf("Incorrect Number");
    }
    }
    else{
        printf("Incorrect Number");
    }
}