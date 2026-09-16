#include <stdio.h>

int main() {
    int number;
    int square, cube;

    printf("Enter an integer: ");
    scanf("%d", &number);

    square = number * number;
    cube = number * number * number;

    printf("Square = %d\n", square);
    printf("Cube = %d\n", cube);

    return 0;
}
