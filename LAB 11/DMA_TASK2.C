
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *rollNo;
    float *marks;
    int n, i;
    float sum = 0, average;

    printf("Enter total number of students: ");
    scanf("%d", &n);

    // Allocate memory using calloc
    rollNo = (int *)calloc(n, sizeof(int));
    marks = (float *)calloc(n, sizeof(float));

    if (rollNo == NULL || marks == NULL)
    {
        printf("Memory allocation failed!");
        free(rollNo);
        free(marks);
        return 1;
    }

    printf("\nEnter student records:\n");

    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &rollNo[i]);

        printf("Enter Marks: ");
        scanf("%f", &marks[i]);

        sum = sum + marks[i];
    }

    // Calculate average marks
    average = sum / n;

    // Display student records
    printf("\n----- Student Records -----\n");

    printf("Roll Number\tMarks\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t\t%.2f\n", rollNo[i], marks[i]);
    }

    printf("\nTotal Marks: %.2f", sum);
    printf("\nAverage Marks: %.2f\n", average);

    // Release memory
    free(rollNo);
    free(marks);

    return 0;
}
