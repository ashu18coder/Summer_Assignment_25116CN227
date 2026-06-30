#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int largest, secondLargest;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = secondLargest = arr[0];

    // Find largest and second largest
    for(i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    printf("Second largest element = %d\n", secondLargest);

    return 0;
}