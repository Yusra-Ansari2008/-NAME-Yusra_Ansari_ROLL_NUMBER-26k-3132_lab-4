#include <stdio.h>

int main() 
{
    float obtained_marks;
    float family_income;
    printf("Enter your obtained marks in %% : ");
    scanf("%f", &obtained_marks);
    printf("Enter your family income in Rs. : ");
    scanf("%f", &family_income);
    if((obtained_marks>=80) || (family_income<50000)){
        printf("You are eligible for the scholarship.");
    }
    else{
        printf("You are not eligible for the scholarship.");
    }
    return 0;
}