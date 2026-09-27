#include<stdio.h>

int main(){
    int Balance;
    printf("Enter your Balance\n");
    scanf("%d",&Balance);

    if (Balance<=500)
    {
         printf("Low Balance");
    } else 
      if(Balance>500 && Balance<=2000)
    {
       printf("Sufficinet Balance");
    } else if (Balance>2000)
    {
        printf("Premium Balance");
    }
    
    return 0;
}