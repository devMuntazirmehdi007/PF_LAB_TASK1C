
#include <stdio.h>

// ==========================================
// TASK 4: PASSING ARRAY TO A FUNCTION
// ==========================================

int calculateTotal(int *account_array, int size)
{
    int total = 0;

    for (int i = 0; i < size; i++)
    {
        total += *(account_array + i);
    }

    return total;
}


// ==========================================
// TASK 5: FUNCTION POINTERS
// ==========================================

// Deposit function
int deposit(int currentAmount, int depositAmount)
{
    if (depositAmount <= 0)
    {
        printf("Invalid deposit amount!\n");
        return currentAmount;
    }

    return currentAmount + depositAmount;
}


// Withdraw function
int withdraw(int currentAmount, int withdrawalAmount)
{
    if (withdrawalAmount <= 0 ||
        withdrawalAmount > currentAmount)
    {
        printf("Insufficient balance!\n");
        return currentAmount;
    }

    return currentAmount - withdrawalAmount;
}


// ==========================================
// TASK 6: PASSING FUNCTION POINTER AS ARGUMENT
// ==========================================

int processTransaction(int currentAmount, int amount,
                       int (*operation)(int, int))
{
    int updatedBalance;

    updatedBalance = operation(currentAmount, amount);

    return updatedBalance;
}


int main()
{
    // ==========================================
    // TASK 1: BASIC POINTERS AND ACCOUNT BALANCE
    // ==========================================

    printf("\n========== TASK 1 ==========\n");

    int balance[5] = {15000, 25000, 18000, 32000, 12000};

    int customerIndex;

    printf("Enter customer index (0-4): ");
    scanf("%d", &customerIndex);

    if (customerIndex < 0 || customerIndex >= 5)
    {
        printf("Invalid customer index!\n");
        return 0;
    }

    int *ptr = &balance[customerIndex];

    printf("Customer Balance: %d\n", *ptr);
    printf("Memory Address: %p\n", (void *)ptr);

    // Update balance through pointer dereferencing
    *ptr = 30000;

    printf("Updated Balance: %d\n", *ptr);


    // ==========================================
    // TASK 2: POINTER TO A 2D ARRAY
    // ==========================================

    printf("\n========== TASK 2 ==========\n");

    int transactions[2][3] =
    {
        {120000, 150000, 180000},
        {200000, 170000, 220000}
    };

    // Pointer to an array of three integers
    int (*transactionPtr)[3] = transactions;

    for (int i = 0; i < 2; i++)
    {
        int branchTotal = 0;

        printf("\nBranch %d Row Address: %p\n",
               i + 1, (void *)(transactionPtr + i));

        for (int j = 0; j < 3; j++)
        {
            int value = *(*(transactionPtr + i) + j);

            printf("Month %d Value: %d\n", j + 1, value);

            branchTotal += value;
        }

        printf("Branch %d Total Transactions: %d\n",
               i + 1, branchTotal);
    }


    // ==========================================
    // TASK 3: ARRAY OF POINTERS
    // ==========================================

    printf("\n========== TASK 3 ==========\n");

    int branch1[3] = {15000, 23000, 32000};

    int branch2[4] = {12000, 21000, 27000, 35000};

    // Array of pointers
    int *branches[2] =
    {
        branch1,
        branch2
    };

    // Different sizes of branch arrays
    int sizes[2] = {3, 4};

    for (int i = 0; i < 2; i++)
    {
        int total = 0;

        printf("\nBranch %d:\n", i + 1);

        for (int j = 0; j < sizes[i]; j++)
        {
            printf("Customer %d Balance: %d\n",
                   j + 1, *(branches[i] + j));

            printf("Memory Address: %p\n",
                   (void *)(branches[i] + j));

            total += *(branches[i] + j);
        }

        printf("Branch %d Total Balance: %d\n",
               i + 1, total);
    }


    // ==========================================
    // TASK 4: CALCULATE TOTAL FUNCTION
    // ==========================================

    printf("\n========== TASK 4 ==========\n");

    int total1 = calculateTotal(branch1, 3);

    int total2 = calculateTotal(branch2, 4);

    printf("Branch 1 Total: %d\n", total1);

    printf("Branch 2 Total: %d\n", total2);


    // ==========================================
    // TASK 5: FUNCTION POINTERS
    // ==========================================

    printf("\n========== TASK 5 ==========\n");

    int currentBalance = 10000;

    int (*operation)(int, int);

    // Calling deposit using function pointer
    operation = deposit;

    currentBalance = operation(currentBalance, 3000);

    printf("After Deposit: %d\n", currentBalance);

    // Calling withdraw using function pointer
    operation = withdraw;

    currentBalance = operation(currentBalance, 2000);

    printf("After Withdrawal: %d\n", currentBalance);


    // ==========================================
    // TASK 6: PROCESS TRANSACTION
    // ==========================================

    printf("\n========== TASK 6 ==========\n");

    int accountBalance = 20000;

    // Deposit through processTransaction
    accountBalance = processTransaction(
        accountBalance, 5000, deposit
    );

    printf("Balance After Deposit: %d\n", accountBalance);

    // Withdrawal through processTransaction
    accountBalance = processTransaction(
        accountBalance, 3000, withdraw
    );

    printf("Balance After Withdrawal: %d\n", accountBalance);


    return 0;
}
