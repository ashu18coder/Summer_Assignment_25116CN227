#include <stdio.h>

int main()
{
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop controls the number of rows (from rows to 1)
    for (i = rows; i >= 1; i--)
    {
        // Inner loop prints numbers from 1 to i
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}