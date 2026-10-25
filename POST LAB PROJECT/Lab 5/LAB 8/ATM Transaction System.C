#include <stdio.h>

void displayMenu()
{
    printf("\n--- ATM MENU ---\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
    printf("Enter choice: ");
}

void showBalance(float balance)
{
    printf("Current Balance: Rs. %.2f\n", balance);
}

float deposit(float balance, float amount)
{
    if(amount <= 0)
        printf("Deposit must be positive.\n");
    else
    {
        balance += amount;
        printf("Deposit successful.\n");
        showBalance(balance);
    }

    return balance;
}

float withdraw(float balance, float amount)
{
    if(amount <= 0)
        printf("Withdrawal must be positive.\n");
    else if(amount > 10000)
        printf("Maximum withdrawal is Rs. 10,000.\n");
    else if(amount > balance)
        printf("Insufficient balance.\n");
    else
    {
        balance -= amount;
        printf("Withdrawal successful.\n");
        showBalance(balance);

        if(balance < 5000)
            printf("Warning: Low balance!\n");
    }

    return balance;
}

int main()
{
    float balance = 20000, amount;
    int choice;

    do
    {
        displayMenu();
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                showBalance(balance);
                break;

            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);
                balance = deposit(balance, amount);
                break;

            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);
                balance = withdraw(balance, amount);
                break;

            case 4:
                printf("Thank you for using the ATM.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while(choice != 4);

    return 0;
}