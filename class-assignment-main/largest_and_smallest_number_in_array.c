#include <stdio.h>

int main()
{
    int n, i;
    int arr[100];
    int *ptr;
    int lrg, sml;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter elements %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    ptr = arr;
    lrg = sml = *ptr;

    for (i = 1; i < n; i++)
    {
        ptr++;
        if (*ptr > lrg)
            lrg = *ptr;
        if (*ptr < sml)
            sml = *ptr;
    }

    printf("\nLargest number = %d", lrg);
    printf("\nSmallest number = %d", sml);

    printf("\nRaushan Kumar , 125113012");

    return 0;
}
