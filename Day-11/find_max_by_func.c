#include <stdio.h>

int maximum(int a, int b)
{
    // Compare the two numbers
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int num1, num2, max;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Call the function
    max = maximum(num1, num2);

    printf("Maximum number = %d\n", max);

    return 0;
}