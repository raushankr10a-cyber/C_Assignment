#include <stdio.h>

int reverse(int num)
{
    int sum = 0;
    while (num != 0)
    {
        int digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    return sum;
}

int main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = reverse(n);
    printf("Sum of digiits is: %d", result);

    printf("\nRaushan Kumar , 125113012");
    return 0;
}
