#include <stdio.h>
int main()
{
    int n;
    printf("Enter any digit number : ");
    scanf("%d", &n);

    int m = n;
    int rev = 0;
    do
    {
        int d = n % 10;
        rev = rev * 10 + d;
        n = n / 10;
    }
     while (n > 0);

    printf("The reverse of %d is : %d", m, rev);

    printf("\nRaushan Kumar , 125113012");
    return 0;
}