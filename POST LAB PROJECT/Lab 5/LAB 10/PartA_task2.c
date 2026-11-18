
#include <stdio.h>
#include <string.h>

int main()
{
    char product1[100];
    char product2[100];

    printf("Enter first product name: ");
    fgets(product1, sizeof(product1), stdin);

    printf("Enter second product name: ");
    fgets(product2, sizeof(product2), stdin);

    product1[strcspn(product1, "\n")] = '\0';
    product2[strcspn(product2, "\n")] = '\0';

    if(strcmp(product1, product2) == 0)
    {
        printf("\nBoth product names are identical.");
    }
    else
    {
        printf("\nProduct names are different.");
    }

    printf("\nLength of Product 1: %d", (int)strlen(product1));
    printf("\nLength of Product 2: %d", (int)strlen(product2));

    return 0;
}
