#include <stdio.h>

float calculateBonus(float salary, int years)
{
    if(years > 5)
        return salary * 0.15;
    else if(years >= 3)
        return salary * 0.10;
    else
        return salary * 0.05;
}

float calculateTax(float salary)
{
    if(salary > 100000)
        return salary * 0.05;

    return 0;
}

int main()
{
    float basic, bonus, gross, tax, finalSalary;
    int years;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    printf("Enter years of service: ");
    scanf("%d", &years);

    if(basic < 0 || years < 0)
    {
        printf("Invalid input.\n");
        return 0;
    }

    bonus = calculateBonus(basic, years);
    gross = basic + bonus;
    tax = calculateTax(gross);
    finalSalary = gross - tax;

    printf("Basic Salary: Rs. %.2f\n", basic);
    printf("Bonus: Rs. %.2f\n", bonus);
    printf("Tax: Rs. %.2f\n", tax);
    printf("Final Salary: Rs. %.2f\n", finalSalary);

    return 0;
}