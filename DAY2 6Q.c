#include <stdio.h>

#define MAX_SIZE 100 // Maximum array size

int main()
{
    int arr[MAX_SIZE];
    int size, i, temp;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter the elements of the array: ");
    for(i=0; i<size; i++)
        scanf("%d", &arr[i]);

    // Reverse the array
    for(i=0; i<size/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }

    // Print the reversed array
    printf("Reversed array: ");
    for(i=0; i<size; i++)
        printf("%d ", arr[i]);

    return 0;
}

