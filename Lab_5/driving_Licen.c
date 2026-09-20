#include <stdio.h>
int main()
{
    char CNIC;
    char driving_test;

    printf("You have CNIC : 'Y/N'\n ");
    scanf("%c",&CNIC);
    printf("You Pass the  driving Test :  'Y/N'\n ");
    scanf(" %c",&driving_test);

    if(CNIC=='Y' || CNIC=='y'){
       if(driving_test=='Y'  || driving_test == 'y'){
          printf("Your Licene will be issue soon\n ");
       } else{
        printf("First pass the driving Licene\n");
       }
    } else{
        printf("You are under 18\n ");
    }
    
}