#include<stdio.h>

int main(){
    int appointment;
    printf("Enter Appointed number 1 for appiontment and 0 for not\n");
    scanf("%d",&appointment);
    char docter_available;
    printf("Enter yes is docter available not for not avialbe  [Y/N]\n");
    scanf(" %c",&docter_available);
    int registration;
    printf("Enter 1 for registed or 0 for not registered\n");
    scanf(" %d",&registration);

    if (appointment==1)
    {
        if (docter_available=='Y' || docter_available=='y')
        {
            if (registration==1)
            {
                printf("Now patient can meet on thursday ");
            }else
            {
                printf("Please register your pateint ");
            }
            
        } else
        {
            printf("Docter is not available");
        }
        
    } else
    {
        printf("Please first take appointment");
    }
    
    
}