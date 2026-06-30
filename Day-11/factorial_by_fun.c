#include <stdio.h>

int factorial(int n)
{
    int i, fact = 1;

    // Multiply numbers from 1 to n
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    // Return the factorial
    return fact;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Check for negative number
    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        // Call the function and print the result
        printf("Factorial of %d = %d\n", num, factorial(num));
    }

    return 0;
}