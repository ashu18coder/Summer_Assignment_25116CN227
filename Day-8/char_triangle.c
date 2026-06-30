#include <stdio.h>

int main()
{
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)// Outer loop controls the number of rows
    {
        
        for (j = 0; j < i; j++)// Inner loop prints characters from A to the current row
        {
            printf("%c", 'A' + j);
        }

        printf("\n");
    }

    return 0;
}