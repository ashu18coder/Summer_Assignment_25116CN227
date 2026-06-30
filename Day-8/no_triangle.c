#include <stdio.h>

int main()
{
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)  // Outer loop controls the number of rows
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