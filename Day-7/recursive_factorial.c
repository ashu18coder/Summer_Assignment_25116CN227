#include <stdio.h>

int factorial(int n)
{
    // Base case
    if (n == 0 || n == 1)
    {
        return 1;
    }

    
    return n * factorial(n - 1);// Recursive case
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d = %d\n", num, factorial(num));

    return 0;
}