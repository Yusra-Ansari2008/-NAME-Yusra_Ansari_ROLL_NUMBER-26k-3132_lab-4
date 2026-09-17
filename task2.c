#include <stdio.h>

int main() 
{  
    int latedays;
    printf("Enter the number of late days :");
    scanf("%d", &latedays);
    if(latedays == 0){
        printf("No Fine");
    }
    else { if(latedays>0)
        {
            if (latedays<=5)
            {
               printf("Fine: Rs.50");
            }
            else { if(latedays<=10){
                printf("Fine: Rs.100");
            }
                   else{
                    printf("Fine: Rs.200");
                   }
                 }
        }
          }
    return 0;
}