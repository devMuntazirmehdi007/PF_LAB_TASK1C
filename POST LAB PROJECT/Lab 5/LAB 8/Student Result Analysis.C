#include <stdio.h>

int main()
{
    int marks[2][3][4];
    int i, j, k, total, count = 0;
    int highest, highestStudent;
    float avg, sectionTotal[2] = {0};

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Section %d, Student %d:\n", i+1, j+1);

            for(k = 0; k < 4; k++)
            {
                printf("Enter subject %d marks: ", k+1);
                scanf("%d", &marks[i][j][k]);
            }
        }
    }

    for(i = 0; i < 2; i++)
    {
        highest = -1;
        highestStudent = 0;

        for(j = 0; j < 3; j++)
        {
            total = 0;

            for(k = 0; k < 4; k++)
                total += marks[i][j][k];

            avg = total / 4.0;
            sectionTotal[i] += avg;

            printf("Section %d Student %d: Total = %d, Average = %.2f\n",
                   i+1, j+1, total, avg);

            if(avg >= 50)
                count++;

            if(total > highest)
            {
                highest = total;
                highestStudent = j + 1;
            }
        }

        printf("Highest student in Section %d: Student %d\n",
               i+1, highestStudent);
    }

    printf("Students with average >= 50: %d\n", count);

    if(sectionTotal[0] > sectionTotal[1])
        printf("Section 1 has the highest average.\n");
    else if(sectionTotal[1] > sectionTotal[0])
        printf("Section 2 has the highest average.\n");
    else
        printf("Both sections have equal averages.\n");

    return 0;
}