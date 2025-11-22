#include <stdio.h>

int prime(int a)
{
    int b = 1;

    if (a == 1 || a == 0)
        b = 0;

    else
    {
        for (int i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
                b = 0;
                break;
            }
        }
    }
    return b;
}

int main()
{
    int a;

    printf("Enter your number: ");
    scanf("%d", &a);

    if (prime(a))
    {
        printf("number is prime");
    }

    else
    {
        printf("number is not prime");
    }

    printf("\nRaushan Kumar , 125113012"); 

    return 0;
}
