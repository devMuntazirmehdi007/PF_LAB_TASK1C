#include <stdio.h>

int isEligible(int age, float salary, float payments)
{
    float remaining = salary - payments;

    if(age < 21)
        return 0;
    else if(salary < 50000)
        return 0;
    else if(remaining < salary * 0.40)
        return 0;

    return 1;
}

float calculateLoan(float salary, float payments)
{
    return (salary - payments) * 10;
}

void checkLoan(int age, float salary, float payments)
{
    if(age < 21)
        printf("Ineligible: Age must be at least 21.\n");
    else if(salary < 50000)
        printf("Ineligible: Salary must be at least Rs. 50,000.\n");
    else if(salary - payments < salary * 0.40)
        printf("Ineligible: Less than 40%% salary remains.\n");
    else
        printf("Maximum Loan: Rs. %.2f\n",
               calculateLoan(salary, payments));
}

int main()
{
    int age;
    float salary, payments;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter monthly salary: ");
    scanf("%f", &salary);

    printf("Enter existing monthly loan payments: ");
    scanf("%f", &payments);

    if(age < 0 || salary < 0 || payments < 0 || payments > salary)
    {
        printf("Invalid input.\n");
        return 0;
    }

    if(isEligible(age, salary, payments))
        printf("Applicant is eligible.\n");

    checkLoan(age, salary, payments);

    return 0;
}