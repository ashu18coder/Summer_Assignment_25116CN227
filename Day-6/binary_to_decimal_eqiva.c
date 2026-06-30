#include <stdio.h>
#include <math.h>

int main()
{
    long long binary;       
    int decimal = 0;        
    int remainder;          
    int i = 0;              

    printf("Enter a binary number: ");// Input binary number
    scanf("%lld", &binary);

    
    while (binary != 0)
    {
        remainder = binary % 10;           // Get the last binary digit
        decimal = decimal + remainder * pow(2, i); // Add its decimal value
        binary = binary / 10;              // Remove the last digit
        i++;                               // Move to the next bit position
    }

   
    printf("Decimal equivalent = %d\n", decimal); // Display the decimal equivalent

    return 0;
}