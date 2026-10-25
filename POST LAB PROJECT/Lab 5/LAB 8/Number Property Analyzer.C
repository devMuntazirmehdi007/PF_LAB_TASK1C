#include <stdio.h>

int isPalindrome(int n)
{
    int original = n, reverse = 0, digit;

    while(n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    return original == reverse;
}

int isPrime(int n)
{
    int i;

    if(n < 2)
        return 0;

    for(i = 2; i <= n / i; i++)
    {
        if(n % i == 0)
            return 0;
    }

    return 1;
}

void analyzeNumber(int n)
{
    if(n % 2 == 0)
        printf("Even number\n");
    else
        printf("Odd number\n");

    if(isPalindrome(n))
        printf("Palindrome number\n");
    else
        printf("Not a palindrome\n");

    if(isPrime(n))
        printf("Prime number\n");
    else
        printf("Not a prime number\n");
}

int main()
{
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Invalid input.\n");
        return 0;
    }

    analyzeNumber(n);

    return 0;
}