#include <stdio.h>
int main()
{
  int  marks[4][2];

//   printf("Enter the marks\n");

  for(int i=0;i<4;i++)
  {
    for(int j=0;j<2;j++)
    {
        int m=1;
        printf("Enter std%d Mid Marks \n",m);
        scanf("%d\n",&marks[i][j]);
        printf("Enter std%d final Marks \n",m);
        scanf("%d\n",&marks[i][m]);
        m+=1;
        printf("\n");
    }
  }


// for(int i=0;i<4;i++)
//   {
//     for(int j=0;j<2;j++)
//     {
//         printf("%d\t\n",marks[i][j]);
//     }
//     printf("\n");
//   }

printf("Total marsk of std:1 is %d:\n",marks[0][0]+marks[0][1]);
printf("Total marsk of std:2 is %d:\n",marks[1][0]+marks[1][1]);
printf("Total marsk of std:3 is %d:\n",marks[2][0]+marks[2][1]);
printf("Total marsk of std:4 is %d:\n",marks[3][0]+marks[3][1]);
  int higest_mid=0;
  int lowest_mid=0;
  for(int i=0;i<3;i++) 
  {
    for(int j=1;j<2;j++)
    {  
      int k=1;
        if(marks[i][j]>marks[k][j])
        {
          higest_mid=marks[i][j];
          lowest_mid=marks[k][j];

        }else{
            higest_mid=marks[i][k];
        }
        k+=1;
    }
  }


 for(int i=0;i<3;i++) 
  {
    for(int j=1;j<2;j++)
    {  
      int k=1;
        if(marks[i][j]>marks[k][j])
        {
          higest_mid=marks[i][j];
          lowest_mid=marks[k][j];

        }else{
            higest_mid=marks[i][k];
            lowest_mid=marks[i][j];
        }
        k+=1;
    }
  }


  printf("higest_mid marks is %d\n",higest_mid);
  printf("lowest_mid marks is %d",lowest_mid);

}