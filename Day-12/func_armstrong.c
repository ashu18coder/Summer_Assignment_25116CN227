#include <stdio.h>

int isArmstrong(int n)
{
    int original = n, sum = 0, rem;

    // Calculate sum of cubes of digits
    while (n != 0)
    {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }

    // Compare sum with original number
    if (sum == original)
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
    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is Not an Armstrong number.\n", num);

    return 0;
}