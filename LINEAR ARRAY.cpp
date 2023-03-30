#include <stdio.h>

int main() {
    int arr[] = {16, 18, 27, 16, 23, 21, 19};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int search = 23;
    int i, pos = -1;

    // Traverse the array to search for the element
    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            pos = i + 1; // Position of the element in the array
            break; // Break the loop if element is found
        }
    }

    if (pos == -1) {
        printf("Element not found in the array.\n");
    } else {
        printf("Given element %d is found at %dth position\n", search, pos);
    }

    return 0;
}
