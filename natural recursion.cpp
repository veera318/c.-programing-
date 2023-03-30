#include <stdio.h>

int sum(int n);

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("The sum of first %d natural numbers is %d", n, sum(n));

    return 0;
}

int sum(int n)
{
    if(n == 0)
        return 0;
    else
        return n + sum(n-1);
}

