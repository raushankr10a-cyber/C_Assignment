#include <stdio.h>

int avg(int a, int arr[])
{
    int sum = 0;
    for (int j = 0; j < a; j++)
    {
        sum += arr[j];
    }
    return sum;
}

int main()
{
    int a;
    printf("Enter number of elements: ");
    scanf("%d", &a);

    int arr[a];

    for (int i = 0; i < a; i++)
    {
        printf("Enter element: ");
        scanf("%d", &arr[i]);
    }
    float b = avg(a, arr);
    printf("Average of all numbers is %f", b / a);

    printf("\nRaushan Kumar , 125113012");

    return 0;
}