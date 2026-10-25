#include <stdio.h>

float calculateBill(int units, int category)
{
    float bill;

    if(category == 1)
    {
        if(units <= 100)
            bill = units * 15;
        else
            bill = 100 * 15 + (units - 100) * 20;
    }
    else
        bill = units * 25;

    return bill;
}

void displayBill(int units, float bill)
{
    float surcharge = 0;

    if(bill > 5000)
        surcharge = bill * 0.05;

    printf("Units: %d\n", units);
    printf("Bill: Rs. %.2f\n", bill);
    printf("Surcharge: Rs. %.2f\n", surcharge);
    printf("Final Payable: Rs. %.2f\n", bill + surcharge);
}

int main()
{
    int units, category;
    float bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    printf("1. Domestic  2. Commercial: ");
    scanf("%d", &category);

    if(units < 0 || (category != 1 && category != 2))
    {
        printf("Invalid input.\n");
        return 0;
    }

    bill = calculateBill(units, category);
    displayBill(units, bill);

    return 0;
}