#include <stdio.h>

int main()
{
    int rows, i, j;

    // Input the size of the square
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop controls the rows
    for (i = 1; i <= rows; i++)
    {
        // Inner loop controls the columns
        for (j = 1; j <= rows; j++)
        {
            // Print '*' on the border, otherwise print space
            if (i == 1 || i == rows || j == 1 || j == rows)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}