#include<stdio.h>

int main()
{
    int temp;
    char choice;
    printf("Choose the conversion scale \n 1)F for farenhite \n 2)C for celsius: \n 3)K for kelvin ");
    scanf(" %c", &choice);

   if(choice=='F')
   {
    printf("In Which Scale you want ot convert the temprature \n 1)C for celsius \n 2)K for kelvin ");
    char convert_choice;
    scanf(" %c", &convert_choice);
    if(convert_choice=='C'){
        printf("Enter the temprature in Farenhite: ");
        scanf("%d",&temp);
        int converted_temp=(temp-32)*5/9;
        printf("The temprature in celsius is : %d",converted_temp);
    } else if(convert_choice =='K'){
        printf("Enter your temprature in Farenhite: ");
        scanf("%d",&temp);
        int converted_temp=(temp-32)*5/9+273;
        printf("The temprature is in Kelvin is :%d",converted_temp);

    }
   } 






   else if(choice=='C')
   {
    printf("In Which scale you want to convet the temprature \n 1)F for farenhite \n 2)K for kelvin ");
    char convert_choice;
    scanf(" %c", &convert_choice);
    if(convert_choice=='F')
    {
        printf("Enter the temprature in Celsius: ");
        scanf("%d",&temp);
        int converted_temp=temp*9/5+32;
        printf("The temprature in celsius is : %d",converted_temp);
    } else if(convert_choice =='K'){
        printf("Enter your temprature in Celsius: ");
        scanf("%d",&temp);
        int converted_temp=(temp+273);
        printf("The temprature is in Kelvin is :%d",converted_temp);

    }
    
    
    
    
    
    else if(choice =='K'){
    printf("In which scale you want to conve the temprature \n 1)F for farenhite \n 2)C for celsius ");
     
    char convert_choice;
    scanf(" %c", &convert_choice);
    if(convert_choice=='F')
    {
        printf("Enter the temprature in Kelvin: ");
        scanf("%d",&temp);
        int converted_temp=(temp-273) *9/5+32;
        printf("The temprature in celsius is : %d",converted_temp);
    } else if(convert_choice =='C'){
        printf("Enter your temprature in Kelvin: ");
        scanf("%d",&temp);
        int converted_temp=(temp+273);
        printf("The temprature is in Kelvin is :%d",converted_temp);

    }

   } 
   
   else
     {
        printf("Invalid choice") ;
        }
}

return 0;
}