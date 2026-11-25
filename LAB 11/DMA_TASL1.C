
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *regNo;
    int initial, additional, i;

    printf("Enter initial number of students: ");
    scanf("%d", &initial);

    // Allocate memory initially
    regNo = (int *)malloc(initial * sizeof(int));

    if (regNo == NULL)
    {
        printf("Memory allocation failed!");
        return 1;
    }

    printf("\nEnter registration numbers:\n");

    for (i = 0; i < initial; i++)
    {
        printf("Student %d: ", i + 1);
        scanf("%d", &regNo[i]);
    }

    printf("\nRegistration numbers after first phase:\n");

    for (i = 0; i < initial; i++)
    {
        printf("%d\n", regNo[i]);
    }

    // Register additional students
    printf("\nEnter number of additional students: ");
    scanf("%d", &additional);

    // Increase allocated memory
    regNo = (int *)realloc(regNo,
                         (initial + additional) * sizeof(int));

    if (regNo == NULL)
    {
        printf("Memory reallocation failed!");
        return 1;
    }

    printf("\nEnter additional registration numbers:\n");

    for (i = initial; i < initial + additional; i++)
    {
        printf("Student %d: ", i + 1);
        scanf("%d", &regNo[i]);
    }

    printf("\nAll student registration numbers:\n");

    for (i = 0; i < initial + additional; i++)
    {
        printf("%d\n", regNo[i]);
    }

    free(regNo);

    return 0;
}
