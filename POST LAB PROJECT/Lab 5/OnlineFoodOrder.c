#include<stdio.h>

int main(){
    int resturentOpen,itemAvailable,balence;
    printf("Enter is resturent Open 1 for open and 0 for not open [1/0]\n");
    scanf("%d",&resturentOpen);
    printf("Enter is item availble 1 for item avialable and 0 for not available [1/0]\n");
    scanf("%d",&itemAvailable);
    printf("Enter is Balence sufficient 1 for sufficient and 0 for not sufficient [1/0]\n");
    scanf("%d",&balence);

    if (resturentOpen)
    {
        if (itemAvailable)
        {
            if (balence)
            {
                printf("Your order is placed");
            } else
            {
                printf("Balence is unsufficent");
            }
            
            
        }else
        {
            printf("Item not available");
        }
        
        
    } else
    {
        printf("Resturent not open yet");
    }
    
    




}