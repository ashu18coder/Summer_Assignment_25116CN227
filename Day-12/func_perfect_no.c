#include <stdio.h>

int isPerfect(int n)
{
    int i, sum = 0;

    // Find sum of  divisors
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum = sum + i;
    }

    // Compare sum with original number
    if (sum == n)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Call the function
    if (isPerfect(num))
        printf("%d is a Perfect number.\n", num);
    else
        printf("%d is Not a Perfect number.\n", num);

    return 0;
}