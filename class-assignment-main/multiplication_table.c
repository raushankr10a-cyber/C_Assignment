#include <stdio.h>

int main()
{
    int n, i = 1;
    printf("ENTER NUMBER TO GET ITS TABLE:");
    scanf("%d", &n);

    while (i <= 10)
    {
        printf("%d X %d=%d\n", n, i, n * i);
        i++;
    }

    printf("\nRaushan Kumar , 125113012");
    return 0;
}