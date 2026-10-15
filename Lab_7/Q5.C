
#include <stdio.h>

int main()
{
    int a[3][3];
    int null = 1, diagonal = 1;
    int upper = 1, lower = 1, identity = 1;

    printf("Enter elements of 3x3 matrix:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Check matrix types
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] != 0)
                null = 0;

            if (i != j && a[i][j] != 0)
                diagonal = 0;

            if (i > j && a[i][j] != 0)
                upper = 0;

            if (i < j && a[i][j] != 0)
                lower = 0;

            if (i == j && a[i][j] != 1)
                identity = 0;

            if (i != j && a[i][j] != 0)
                identity = 0;
        }
    }

    printf("\nMatrix Types:\n");

    printf("Square Matrix\n");

    if (null)
        printf("Null Matrix\n");

    if (diagonal)
        printf("Diagonal Matrix\n");

    if (upper)
        printf("Upper Triangular Matrix\n");

    if (lower)
        printf("Lower Triangular Matrix\n");

    if (identity)
        printf("Identity Matrix\n");

    // Display diagonal elements
    printf("\nDiagonal Elements: ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", a[i][i]);
    }

    // Display upper triangular elements
    printf("\nUpper Triangular Elements:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i <= j)
                printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Display lower triangular elements
    printf("\nLower Triangular Elements:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i >= j)
                printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
