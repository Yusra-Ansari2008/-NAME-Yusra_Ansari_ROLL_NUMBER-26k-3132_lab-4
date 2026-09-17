#include <stdio.h>

int main()
{
    float marks;
    printf("Enter your marks:");
    scanf("%f",&marks);
    if(marks>=50){
        printf("Pass\n");
    }
    else{
        printf("fail\n");
    }
    return 0;
}