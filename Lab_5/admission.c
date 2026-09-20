#include <stdio.h>

int main()
{
    int age, marks;

    printf("Enter student's age: ");
    scanf("%d", &age);

    printf("Enter student's marks: ");
    scanf("%d", &marks);

    if (age >= 18)
    {
        if (marks >= 50)
        {
            printf("Eligible for Admission");
        }
        else
        {
            printf("Not Eligible: Marks are below 50");
        }
    }
    else
    {
        printf("Not Eligible: Age is below 18");
    }

    return 0;
}