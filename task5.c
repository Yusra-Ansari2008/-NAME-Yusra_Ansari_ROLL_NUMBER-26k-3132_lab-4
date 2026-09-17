#include <stdio.h>

int main()
{
    int integer;
    int square;
    int cube;
    printf("Enter an integer : ");
    scanf("%d", &integer);
    square=integer*integer;
    cube=integer*integer*integer;
    printf("Square of your integer is %d. \n",square);
    printf("Cube of your integer is %d. \n",cube);
    return 0;

}