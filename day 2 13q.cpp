#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int matrix[ROWS][COLS] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int sum = 0;
    
    // display matrix
    printf("Matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // calculate diagonal sum
    printf("Diagonal elements: ");
    for (int i = 0; i < ROWS; i++) {
        sum += matrix[i][i]; // add to sum
        printf("%d ", matrix[i][i]); // display diagonal element
    }
    
    printf("\nSum of diagonal elements: %d\n", sum);
    
    return 0;
}

