#include <stdio.h>

int main()
{
    int marks;

    printf("Enter student's marks: ");
    scanf("%d", &marks);

    if (marks >= 50)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}
