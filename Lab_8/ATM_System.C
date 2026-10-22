
#include <stdio.h>

void welcome()
{
    printf("Welcome Back\n");
}

void displayAmount(int withdrawal)
{
    printf("%d\n", withdrawal);
}

int getwithdrawal()
{
    return 50000;
}

int CalculateBalance(int currentAmount)
{
    int withdrawal = 5000;
    int remainingAmount = currentAmount - withdrawal;

    return remainingAmount;
}

int checkWithdrawal(int currentAmount)
{
    int limit = getwithdrawal();
    int withdrawal = 5000;

    if (currentAmount > 0 &&
        withdrawal > 0 &&
        withdrawal < limit &&
        withdrawal <= currentAmount)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    welcome();

    displayAmount(5000);

    int balance = CalculateBalance(40000);
    printf("Remaining Balance: %d\n", balance);

    int result = checkWithdrawal(40000);
    printf("Withdrawal Status: %d\n", result);

    return 0;
}
