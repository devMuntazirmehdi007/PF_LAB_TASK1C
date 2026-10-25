#include <stdio.h>

int main()
{
    int sales[2][3][4];
    int i, j, k, total;
    int branchTotal[2] = {0};
    int weekTotal[4] = {0};
    int productTotal, highest, highestProduct;
    int highestWeek = 0;

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            for(k = 0; k < 4; k++)
            {
                printf("Branch %d Product %d Week %d: ",
                       i+1, j+1, k+1);
                scanf("%d", &sales[i][j][k]);
            }
        }
    }

    for(i = 0; i < 2; i++)
    {
        highest = -1;
        highestProduct = 0;

        for(j = 0; j < 3; j++)
        {
            productTotal = 0;

            for(k = 0; k < 4; k++)
            {
                productTotal += sales[i][j][k];
                branchTotal[i] += sales[i][j][k];
                weekTotal[k] += sales[i][j][k];
            }

            printf("Branch %d Product %d Total: %d\n",
                   i+1, j+1, productTotal);

            if(productTotal > highest)
            {
                highest = productTotal;
                highestProduct = j + 1;
            }
        }

        printf("Best-selling product in Branch %d: Product %d\n",
               i+1, highestProduct);
    }

    for(k = 0; k < 4; k++)
    {
        printf("Week %d Total Sales: %d\n", k+1, weekTotal[k]);

        if(weekTotal[k] > weekTotal[highestWeek])
            highestWeek = k;
    }

    printf("Highest sales week: Week %d\n", highestWeek+1);

    if(branchTotal[0] > branchTotal[1])
        printf("Branch 1 sold more products.\n");
    else if(branchTotal[1] > branchTotal[0])
        printf("Branch 2 sold more products.\n");
    else
        printf("Both branches sold equal quantities.\n");

    return 0;
}