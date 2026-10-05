#include <stdio.h>
int main()
{
    int balance=50000,no_withdrwal=0,remaining_balance,amount;

    int i;
    while(balance>0){
        printf("Enter the amount for withdrwal\n");
        scanf("%d",&amount);

      if(amount>0 && balance>=amount)
      {
        remaining_balance=balance-amount;
        balance=balance-amount;
       no_withdrwal++;

    }else{
        printf("Your current balance is low than withdrwal amount \n");
        balance=0;
    } 
    
     } 



    printf("Remaining Balance   : %d\n",remaining_balance);
    printf("No of withdrwal     : %d",no_withdrwal);

}