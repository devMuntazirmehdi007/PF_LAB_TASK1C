#include<stdio.h>

int main(){
    int width;
    int length;

    printf("Enter lenght of the rectangle : ");
    scanf("%d",&length);
    printf("Enter width of the rectangle : ");
    scanf("%d",&width);

    int area= length * width;
    printf("Area of rectangle is : %d",area);
    return 0;
}