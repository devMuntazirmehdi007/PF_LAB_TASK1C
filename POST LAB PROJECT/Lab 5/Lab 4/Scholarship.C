#include<stdio.h>

int main(){
    int marks;
    int famly_icome;
    printf("Enter your marks: ");
    scanf("%d",&marks);
    printf("Enter your family income: ");
    scanf("%d",&famly_icome);
    if(marks>=80 || famly_icome<=50000){
        printf("You are eligible for scholarship");
    }
    else{
        printf("You are not eligible for scholarship");
    }
    return 0;
    
}