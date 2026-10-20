#include<stdio.h>
int main()
{
    int b=0;
    for(int i=1;i<9;i++)
    {
        b=0;   
        for(int j=0;j<i;j++)
          {
           int a=1;
           
            b+=1;
            if(b==4){
                a=0;
                printf("%d\t",a);
                b=0;
            }else{
                printf("%d\t",a);
            } 
          }
          printf("\n");
         
    }
}