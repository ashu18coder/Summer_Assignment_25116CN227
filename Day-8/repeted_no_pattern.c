#include <stdio.h>

int main()
{
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)// Outer loop controls the number of rows
    {
       
        for (j = 1; j <= i; j++) // Inner loop prints the current row number i, i times
        {
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;
}