#include <stdio.h>

int fibonacci(int n)
{
    // Base cases
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    
    return fibonacci(n - 1) + fibonacci(n - 2);// Recursive call
}

int main()
{
    int n, i;

   
    printf("Enter the number of terms: "); // Input the number of terms
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}