
#include <stdio.h>

int main()
{
    FILE *fp;

    char name[50];
    float obtained, total, percentage;

    printf("Enter student name: ");
    scanf(" %49[^\n]", name);

    printf("Enter obtained marks: ");
    scanf("%f", &obtained);

    printf("Enter total marks: ");
    scanf("%f", &total);

    if(total <= 0 || obtained < 0 || obtained > total)
    {
        printf("Invalid marks!");
        return 1;
    }

    percentage = (obtained / total) * 100;

    fp = fopen("student.txt", "w");

    if(fp == NULL)
    {
        printf("File could not be opened!");
        return 1;
    }

    fprintf(fp, "%s\n%.2f\n%.2f\n%.2f",
            name, obtained, total, percentage);

    fclose(fp);

    fp = fopen("student.txt", "r");

    if(fp == NULL)
    {
        printf("File could not be opened!");
        return 1;
    }

    fscanf(fp, " %49[^\n]", name);
    fscanf(fp, "%f%f%f", &obtained, &total, &percentage);

    printf("\n----- Student Result -----");
    printf("\nName: %s", name);
    printf("\nObtained Marks: %.2f", obtained);
    printf("\nTotal Marks: %.2f", total);
    printf("\nPercentage: %.2f%%", percentage);

    fclose(fp);

    return 0;
}
