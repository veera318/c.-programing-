#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; i++) {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
    return 0;
}

