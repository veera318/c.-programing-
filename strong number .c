#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n, num, sum = 0, rem;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    num = n;
    while (num > 0) {
        rem = num % 10;
        sum += factorial(rem);
        num /= 10;
    }
    if (sum == n) {
        printf("%d is a strong number\n", n);
    } else {
        printf("%d is not a strong number\n", n);
    }
    return 0;
}

