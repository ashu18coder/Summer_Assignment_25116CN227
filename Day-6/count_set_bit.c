#include <stdio.h>

int main()
{
    int num, count = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Count set bits
    while (num > 0)
    {
        if (num % 2 == 1)   // Check if the last bit is 1
        {
            count++;
        }

        num = num / 2;      // Remove the last bit
    }

    // Display the result
    printf("Number of set bits = %d\n", count);

    return 0;
}