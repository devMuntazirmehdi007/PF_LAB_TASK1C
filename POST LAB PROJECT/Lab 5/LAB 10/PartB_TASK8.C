
#include <stdio.h>

int main()
{
    FILE *fp;

    int id;
    float obtained, total, percentage;

    fp = fopen("result.txt", "w+");

    if(fp == NULL)
    {
        printf("File could not be opened!");
        return 1;
    }

    printf("Enter student ID: ");
    scanf("%d", &id);

    printf("Enter obtained marks: ");
    scanf("%f", &obtained);

    printf("Enter total marks: ");
    scanf("%f", &total);

    if(total <= 0 || obtained < 0 || obtained > total)
    {
        printf("Invalid marks!");
        fclose(fp);
        return 1;
    }

    percentage = (obtained / total) * 100;

    fprintf(fp, "%d %.2f %.2f %.2f",
            id, obtained, total, percentage);

    rewind(fp);

    fscanf(fp, "%d %f %f %f",
           &id, &obtained, &total, &percentage);

    printf("\n----- Student Result -----");
    printf("\nStudent ID: %d", id);
    printf("\nObtained Marks: %.2f", obtained);
    printf("\nTotal Marks: %.2f", total);
    printf("\nPercentage: %.2f%%", percentage);

    fclose(fp);

    return 0;
}
