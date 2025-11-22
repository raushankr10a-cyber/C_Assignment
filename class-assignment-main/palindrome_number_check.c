#include <stdio.h>

int main()
{
    int num, result,n;

    printf("Enter a number: ");
    scanf("%d", &num);

    n=num;

    int rev = 0;
    while (num != 0)
    {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }

    if (n == rev)
    {
        printf("Number is palindrome.");
    }

    else
    {
        printf("Number is not palindrome.");
    }

    printf("\nRaushan Kumar , 125113012");
    return 0;
}
