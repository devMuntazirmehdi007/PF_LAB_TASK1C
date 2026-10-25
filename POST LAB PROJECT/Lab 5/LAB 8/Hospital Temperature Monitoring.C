#include <stdio.h>

int main()
{
    float temp[2][3][4];
    float total, avg, highest;
    int i, j, k, count = 0;

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            for(k = 0; k < 4; k++)
            {
                printf("Ward %d Patient %d Reading %d: ",
                       i+1, j+1, k+1);
                scanf("%f", &temp[i][j][k]);
            }
        }
    }

    for(i = 0; i < 2; i++)
    {
        highest = temp[i][0][0];

        for(j = 0; j < 3; j++)
        {
            total = 0;

            for(k = 0; k < 4; k++)
            {
                total += temp[i][j][k];

                if(temp[i][j][k] > 37.5)
                    count++;

                if(temp[i][j][k] > highest)
                    highest = temp[i][j][k];
            }

            avg = total / 4.0;

            printf("Ward %d Patient %d Average: %.2f\n",
                   i+1, j+1, avg);

            if(avg > 38.0)
                printf("Patient %d in Ward %d has high average temperature.\n",
                       j+1, i+1);
        }

        printf("Highest temperature in Ward %d: %.2f\n",
               i+1, highest);
    }

    printf("Readings above 37.5 C: %d\n", count);

    return 0;
}