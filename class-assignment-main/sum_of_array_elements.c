#include <stdio.h>

int main()
{
    int arr[100], n, sum = 0;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    for (int i = 0; i < n; i++)
    {
        sum += *(ptr + i);
    }

    printf("Sum of array elements = %d\n", sum);
    printf("Raushan Kumar , 125113012");

    return 0;
}
