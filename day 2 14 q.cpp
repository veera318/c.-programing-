#include <stdio.h>

int main() {
    int arr[100], n, i;
    int max, min;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume first element as maximum and minimum
    max = arr[0];
    min = arr[0];

    // Iterate over the array and update max and min accordingly
    for(i=1; i<n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    // Output the results
    printf("Maximum value in the array: %d\n", max);
    printf("Minimum value in the array: %d\n", min);

    return 0;
}

