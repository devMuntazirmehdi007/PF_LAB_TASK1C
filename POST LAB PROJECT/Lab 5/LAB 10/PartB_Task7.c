
#include <stdio.h>

int main()
{
    FILE *fp;

    int obtained, total;
    int newObtained, newTotal;

    fp = fopen("marks.txt", "r+");

    if(fp == NULL)
    {
        printf("File could not be opened!");
        return 1;
    }

    fscanf(fp, "%d %d", &obtained, &total);

    printf("Existing Obtained Marks: %d", obtained);
    printf("\nExisting Total Marks: %d", total);

    printf("\n\nEnter updated obtained marks: ");
    scanf("%d", &newObtained);

    printf("Enter updated total marks: ");
    scanf("%d", &newTotal);

    if(newTotal <= 0 || newObtained < 0 || newObtained > newTotal)
    {
        printf("Invalid marks!");
        fclose(fp);
        return 1;
    }

    rewind(fp);

    fprintf(fp, "%d %d", newObtained, newTotal);

    fclose(fp);

    fp = fopen("marks.txt", "r");

    if(fp == NULL)
    {
        printf("File could not be opened!");
        return 1;
    }

    fscanf(fp, "%d %d", &obtained, &total);

    printf("\n\n----- Updated Student Record -----");
    printf("\nObtained Marks: %d", obtained);
    printf("\nTotal Marks: %d", total);

    fclose(fp);

    return 0;
}
