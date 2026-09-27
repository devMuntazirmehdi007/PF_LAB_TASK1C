#include<stdio.h>

int main(){
    int operation;
    printf("Use opration for diffenrce work \n 1) for Balance Inquiry \n 2) For withdrawl cash \n 3) for Cash deposite \n 4) for Pin change\n ");

    scanf("%d",&operation);

    switch (operation)
    {

    case 1:
         int balace;
         printf ("1) Current Balance \n2) Last month Balance\n");
          scanf("%d",&balace);

         switch (balace)
         {
         case 1:
              printf("26000");
            break;
         case 2:
            printf("201890");
            break;
         default:
           printf("Enter correct operation");
            break;
         }
        break;


    case 2:
            int withdrwal;
         printf ("1) 5000 \n 2) 10000  \n 3) Custome Amount\n");
          scanf("%d",&withdrwal);

         switch (withdrwal)
         {
         case 1:
              printf("5000 Sussfully withdrwal");
            break;
         case 2:
            printf("10000 sussfully withdrwal");
            break;
          case 3:
            int custome_amount;
            printf("Enter custome amount which you want to withdrwal\n");
            scanf("%d",&custome_amount);
            printf("%d Sussfully withdrwal",custome_amount);
            break;
         default:
           printf("Enter correct operation");
            break;
         }
        break;  


    
    case 3:
        int cash_deposite ;
         printf ("1)Cash Deposite \n2)Check Deposite limit\n");
          scanf("%d",&cash_deposite);
         switch (cash_deposite)
         {
         case 1:
            int deposite_amount;
              printf("Enter deposite amount\n");
              scanf("%d",&deposite_amount);
              printf("%d Sussfully desposite",deposite_amount);
            break;
         case 2:
            printf("Your limit is 1million");
            break;
         default:
           printf("Enter correct operation");
            break;
         }
        break;


    case 4:
     int old_Pin;
     int newpin;
      printf("Enter Your old Pin\n");
      scanf("%d",&old_Pin);
      printf("Enter new pin\n");
      scanf("%d",&newpin);
      printf("Pin sussfully change");

      break;

    default:
     printf("Enter correct operation");
        break;
    }

}