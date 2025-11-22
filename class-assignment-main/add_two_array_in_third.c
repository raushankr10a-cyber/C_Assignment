#include <stdio.h>

int main()
{
    int n, m;
    printf("ENTER NUMBER OF ELEMENTS IN FIRST ARRAY: ");
    scanf("%d", &n);

    printf("ENTER NUMBER OF ELEMENTS IN SECOND ARRAY: ");
    scanf("%d", &m);

    int a[n], b[m], c[n + m];

    printf("FOR FIRST ARRAY\n");
    for (int i = 0; i < n; i++)
    {
        printf("ENTER ELEMENT %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("FOR SECOND ARRAY\n");
    for (int j = 0; j < m; j++)
    {
        printf("ENTER ELEMENT %d: ", j + 1);
        scanf("%d", &b[j]);
    }

    for (int k = 0; k < n; k++)
    {
        c[k] = a[k];
    } 

    for (int l = 0; l < m; l++)
    {
        c[n + l] = b[l];
    }

    printf("NEW ARRAY IS:");
    for (int o = 0; o < m + n; o++)
    {
        printf(" %d\t", c[o]);
    }

    printf("\nRaushan Kumar , 125113012");
    return 0;
}