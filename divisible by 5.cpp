#include <stdio.h>

int main()
{
    int n, count = 0;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        if(i % 5 == 0)
            count++;
    }

    printf("The number of integers divisible by 5 is %d", count);

    return 0;
}

