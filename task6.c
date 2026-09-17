#include <stdio.h>

int main()
{
    float temperature_in_celsius;
    float temperature_in_fahrenheit;

    printf("Enter Temperature in Celsius:");
    scanf("%f", &temperature_in_celsius);
    temperature_in_fahrenheit=(temperature_in_celsius*1.8)+32;
    
    printf("Temperature in Fahrenheit is %.3f . \n",temperature_in_fahrenheit);
    return 0;
}