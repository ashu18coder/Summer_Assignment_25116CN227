#include <stdio.h>

int isPalindrome(int n)
{
    int original = n, reverse = 0, rem;

    // Reverse the number
    while (n != 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }

    // Compare original and reversed number
    if (original == reverse)
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
    if (isPalindrome(num))
        printf("%d is a Palindrome.\n", num);
    else
        printf("%d is Not a Palindrome.\n", num);

    return 0;
}