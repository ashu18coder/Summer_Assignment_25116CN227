#include <stdio.h>

int isPrime(int n)
{
    int i;

    // Numbers less than or equal to 1 are not prime
    if (n <= 1)
        return 0;

    // Check for factors from 2 to n/2
    for (i = 2; i <= n / 2; i++)
    {
        // If divisible, it is not prime
        if (n % i == 0)
            return 0;
    }

    // If no factor is found, it is prime
    return 1;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Call the function and display the result
    if (isPrime(num))
        printf("%d is a Prime number.\n", num);
    else
        printf("%d is Not a Prime number.\n", num);

    return 0;
}