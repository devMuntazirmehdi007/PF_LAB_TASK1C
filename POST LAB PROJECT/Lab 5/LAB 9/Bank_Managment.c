
#include <stdio.h>

// Calculate total balance
int calculateTotal(int *account_array, int size)
{
    int total_balance = 0;

    for (int i = 0; i < size; i++)
    {
        total_balance += *(account_array + i);
    }

    return total_balance;
}


// Deposit function
int deposit(int currentAmount, int depositAmount)
{
    if (depositAmount <= 0)
    {
        printf("Invalid deposit amount!\n");
        return currentAmount;
    }

    int updatedAmount = currentAmount + depositAmount;

    printf("Updated amount after deposit: %d\n", updatedAmount);

    return updatedAmount;
}


// Withdrawal function
int withdrawal(int currentAmount, int withdrawalAmount)
{
    if (withdrawalAmount <= 0 || currentAmount < withdrawalAmount)
    {
        printf("Your current balance is insufficient!\n");
        return currentAmount;
    }

    int updatedAmount = currentAmount - withdrawalAmount;

    printf("Updated amount after withdrawal: %d\n", updatedAmount);

    return updatedAmount;
}


// Process transaction using function pointer
int processTransaction(int currentAmount, int amount,
                       int (*operation)(int, int))
{
    int updatedBalance = operation(currentAmount, amount);

    return updatedBalance;
}


int main()
{
    // PART 1: One-dimensional array and pointers

    int balance[5] = {15000, 25000, 18000, 32000, 12000};

    int *bal = balance;

    for (int i = 0; i < 5; i++)
    {
        printf("Address of index[%d]: %p\n", i, (void *)(bal + i));
        printf("Value of index[%d]: %d\n\n", i, *(bal + i));
    }


    // PART 2: Two-dimensional array and pointer to array

    int transactions[2][3] =
    {
        {120000, 150000, 180000},
        {200000, 170000, 220000}
    };

    int (*total_transaction)[3] = transactions;

    int sum = 0;

    for (int i = 0; i < 2; i++)
    {
        printf("Branch %d row address: %p\n",
               i, (void *)(total_transaction + i));

        for (int j = 0; j < 3; j++)
        {
            printf("Index[%d][%d] Address: %p Value: %d\n",
                   i, j,
                   (void *)(*(total_transaction + i) + j),
                   *(*(total_transaction + i) + j));

            sum += *(*(total_transaction + i) + j);
        }

        printf("\n");
    }

    printf("Total transactions: %d\n\n", sum);


    // PART 3: Array of pointers

    int customer_account[3] = {15000, 23000, 32000};

    int customer_account2[4] = {12000, 21000, 27000, 35000};

    int *branches[2] =
    {
        customer_account,
        customer_account2
    };

    int sizes[2] = {3, 4};

    for (int i = 0; i < 2; i++)
    {
        int branch_total = 0;

        printf("Branch %d:\n", i + 1);

        for (int j = 0; j < sizes[i]; j++)
        {
            printf("Index[%d] Address: %p Value: %d\n",
                   j,
                   (void *)(branches[i] + j),
                   *(branches[i] + j));

            branch_total += *(branches[i] + j);
        }

        printf("Branch %d Total: %d\n\n", i + 1, branch_total);
    }


    // PART 4: calculateTotal function

    int Total = calculateTotal(customer_account, 3);
    int Total2 = calculateTotal(customer_account2, 4);

    printf("Total balance of Branch 1: %d\n", Total);
    printf("Total balance of Branch 2: %d\n\n", Total2);


    // PART 5: Banking operations using function pointers

    int choice, amount;

    printf("1. Deposit\n");
    printf("2. Withdrawal\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter amount: ");
    scanf("%d", &amount);

    if (choice == 1)
    {
        Total = processTransaction(Total, amount, deposit);
    }
    else if (choice == 2)
    {
        Total = processTransaction(Total, amount, withdrawal);
    }
    else
    {
        printf("Invalid choice!\n");
    }

    printf("\nFinal Branch 1 Balance: %d\n", Total);

    return 0;
}
