#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0)
    {

        int r;

        r = a % b;
        a = b;
        b = r;
    }

    return a;
}
int main()
{
    int a, b;

    printf("enter first number:");
    scanf("%d", &a);

    printf("enter second number:");
    scanf("%d", &b);

    int c = gcd(a, b);

    printf("gcd is %d", c);

    printf("\nRaushan Kumar , 125113012");

    return 0;
}
