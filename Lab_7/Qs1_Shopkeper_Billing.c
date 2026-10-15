#include <stdio.h>

int main()
{
    int product[5][2];
    int total, grandTotal = 0;

    for (int row = 0; row < 5; row++)
    {
        printf("Enter the Product %d Quantity: ", row + 1);
        scanf("%d", &product[row][0]);

        printf("Enter the Product %d Price: ", row + 1);
        scanf("%d", &product[row][1]);
    }

    printf("\nProduct\t\tQuantity\tUnit Price\tTotal Price\n");

    for (int row = 0; row < 5; row++)
    {
        total = product[row][0] * product[row][1];
        grandTotal += total;

        printf("%d\t\t%d\t\t%d\t\t%d\n",
               row + 1,
               product[row][0],
               product[row][1],
               total);
    }

    printf("\nGrand Total = %d\n", grandTotal);

    return 0;
}