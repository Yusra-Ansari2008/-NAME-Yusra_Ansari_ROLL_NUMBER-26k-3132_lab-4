#include <stdio.h>

int main() 
{
    char student_name[80];
    puts("Enter student_name :");
    fgets(student_name, sizeof(student_name), stdin);
    puts("Welcome to Fast University, ");
    puts(student_name);

    return 0;
}
