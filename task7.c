#include <stdio.h>

int main() 
{
    float number1;
    float number2;
    float number3;
    float average;

    printf("Enter Number 1: ");
    scanf("%f", &number1);

    printf("Enter Number 2: ");
    scanf("%f", &number2);

    printf("Enter Number 3: ");
    scanf("%f", &number3);

    average = (number1 + number2 + number3) / 3;

    printf("The average of the three numbers are %.3f.\n", average);

    return 0;
}