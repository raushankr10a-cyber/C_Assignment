#include <stdio.h>

int main()
{
    int n, i;
    int arr[100];
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter elements %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    printf("Array elements using pointer arithmetic:\n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d = %d\n", i + 1, *(ptr + i));
    }

    printf("\nRaushan Kumar , 125113012"); 

    return 0;
}
