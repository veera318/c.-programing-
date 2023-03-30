#include <stdio.h>

int main() {
    int arr[] = {16, -18, 27, -16, 23, -21, 19}; // Input array
    int size = sizeof(arr)/sizeof(arr[0]); // Size of the array
    int count = 0; // Initialize count to 0

    // Loop through the array and count the number of negative numbers
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            count++;
        }
    }

    // Print the result
    printf("Number of negative numbers in Array elements = %d\n", count);
    return 0;
}
