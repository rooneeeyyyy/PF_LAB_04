/*TASK 8
 GRADE TO REMARK CONVERTER
Take a grade letter (A, B, C, D, F) as input and print a remark for each
(e.g. A+ → "Excellent", A → "Very Good", B → "Good", C → "Work Hard”, D → "Work Hard", F
→ "Fail") using switch.*/
#include<stdio.h>
int main(){
    char grade;
    printf("Enter your grade: \n");
    scanf(" %c", &grade);

    switch (grade)
    {
    case ('A'):
        printf("Excellent");
        break;
    case ('B'):
        printf("Very Good");
        break;
    case ('C'):
        printf("Good");
        break;
    case ('D'):
        printf("Work Hard");
        break;
    case ('F'):
        printf("Fail");
        break;
    
    default:
        printf("You have entered wrong grade");
        break;
    }
}