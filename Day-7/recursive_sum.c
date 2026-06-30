#include <stdio.h>

int sumOfDigits(int n)
{
    
    if (n == 0)// Base case: if number becomes 0
        return 0;

   
    return (n % 10) + sumOfDigits(n / 10); // Add last digit with sum of remaining digits
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of digits = %d", sumOfDigits(num));

    return 0;
}