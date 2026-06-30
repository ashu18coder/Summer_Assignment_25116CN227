#include <stdio.h>

int main()
{
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = rows; i >= 1; i--) // Outer loop controls the number of rows
    {
        
        for (j = 1; j <= i; j++)// Inner loop prints stars
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}