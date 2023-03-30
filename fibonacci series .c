#include <stdio.h>

int main() {
    int limit, first = 0, second = 1, next;
    printf("Enter the limit of the Fibonacci series: ");
    scanf("%d", &limit);
    printf("Fibonacci Series up to %d: ", limit);
    printf("%d, %d, ", first, second);
    next = first + second;
    while (next <= limit) {
        printf("%d, ", next);
        first = second;
        second = next;
        next = first + second;
    }
    printf("\n");
    return 0;
}

