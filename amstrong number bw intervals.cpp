#include <stdio.h>
#include <math.h>

int main()
{
    int low, high, num, digit, sum;

    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &low, &high);

    printf("Armstrong numbers between %d and %d are: ", low, high);

    for(num = low; num <= high; num++)
    {
        sum = 0;
        for(digit = num; digit > 0; digit /= 10)
            sum += pow(digit % 10, 3);
        if(num == sum)
            printf("%d ", num);
    }

    return 0;
}

