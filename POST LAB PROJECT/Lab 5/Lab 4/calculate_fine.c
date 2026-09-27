#include<stdio.h>

int main()
{
    int fine_price=10;
    int late_days;
    printf("Enter the number of late days: ");
    scanf("%d",&late_days);

    if(late_days<=5){
        printf("Your fine price is =50");
    } else if(late_days<=10){
        printf("Your Fine price is =100");
    } else if (late_days>10){
        printf("Your Fine price is =200");
    } else {
        printf("No fine");
    }


    
    return 0;
}