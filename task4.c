#include <stdio.h>

int main() 
{
    float length;
    float width;
    float area;
    float perimeter;
    printf("Enter length of a rectangle :");
    scanf("%f",&length);
    printf("Enter width of a rectangle :");
    scanf("%f",&width);
    area=length*width;
    perimeter=2*(length+width);
    printf("Area of the rectangle is %.3f.\n",area);
    printf("Perimeter of the rectangle is %.3f.\n",perimeter);

    return 0;
}