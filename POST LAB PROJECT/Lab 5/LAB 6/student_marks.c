#include <stdio.h>

int main() {
    float marks, total = 0, average;
    int students = 0;

    while (1) {
        printf("Enter marks (0-100) or -1 to stop: ");
        scanf("%f", &marks);

        if (marks == -1)
            break;

        if (marks >= 0 && marks <= 100) {
            total += marks;
            students++;
        } else {
            printf("Invalid marks! Enter between 0 and 100.\n");
        }
    }

    if (students > 0) {
        average = total / students;

        printf("Total Marks = %.2f\n", total);
        printf("Number of Students = %d\n", students);
        printf("Average Marks = %.2f\n", average);
    } else {
        printf("No marks entered.\n");
    }

    return 0;
}