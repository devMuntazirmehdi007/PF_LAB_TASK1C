#include<stdio.h>

int main(){
    
     int temprature;
     printf("Enter temprature in celsius\n");
     scanf("%d",&temprature);
     if (temprature<15)
     {
        printf("Temprature is Cold😶‍🌫️😶‍🌫️\n");
     } 
     else if(temprature>15 && temprature<30)
       {
         printf("Temprature is Normal\n");
       } 
       else if(temprature>=30){
        printf("Temprature is Hot🥵🥵\n");
       } else {
         printf("Please enter valid temprature");
       }

       return 0;
}