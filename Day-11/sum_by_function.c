#include <stdio.h>

int sum(int a, int b)// Function to calculate the sum of two numbers
{
    // Return the addition of a and b
    return a + b;
}

int main()
{
    int num1, num2, result;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Call the function
    result = sum(num1, num2);

    printf("Sum = %d\n", result);

    return 0;
}