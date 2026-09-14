/*TASK 5
CALCULATE ELECTRICITY BILL ELIGIBILITY FOR DISCOUNT
Take units consumed as input if units are below 100, apply a 10% discount on the bill
otherwise no discount.*/
#include<stdio.h>
int main(){
    int unit;
    float bill;
    printf("Enter the total units consumed:\n");
    scanf("%d",&unit);
    printf("Enter your bill:\n");
    scanf(" %f", &bill);

    if (unit < 100){
        bill = bill * 0.9;
    }

    printf("Your total bill is: %f ", bill);
}