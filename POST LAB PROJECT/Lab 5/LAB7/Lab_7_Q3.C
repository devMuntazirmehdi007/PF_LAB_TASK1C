#include<stdio.h>
   void print(){
      printf("\n");
    }
int main()
{
    int m1[3][3];
    int m2[3][3];

     printf("Enter the Matrix one numbers\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
         scanf("%d",&m1[i][j]);
        //  printf("\n");
        }
    }

    printf("Enter the Matrix 2 numbers\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
         scanf("%d",&m2[i][j]);
        //  printf("\n");
        }
    }
    
    print();
     printf("Matrix 1\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",m1[i][j]);
        }
        print();
    }

     print();
     print();
     printf("Matrix 2 \n");
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",m2[i][j]);
        }
        print();
    }

print();
print();

printf("Addition of M1 AND M2\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",m1[i][j]+m2[i][j]);
        }
        print();
    }

}