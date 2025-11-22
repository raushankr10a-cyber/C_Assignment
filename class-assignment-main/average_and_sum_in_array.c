#include <stdio.h>

int main()
{
    int n;
    printf("ENTER NUMBER OF ELEMENTS:");
    scanf("%d", &n);

    int a[n], sum = 0;
    float avg;

    for (int i = 0; i < n; i++)
    {
        printf("ENTER NUMBER %d: ", i + 1);
        scanf("%d", &a[i]);

        sum += a[i];
    }

    avg = sum / n;

    printf("SUM OF ALL NUMBERS %d AND AVERAGE IS %f", sum, avg);

    printf("\nRaushan Kumar , 125113012");

    return 0;
}