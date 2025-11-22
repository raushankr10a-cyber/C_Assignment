#include <stdio.h>

int main()
{
    int a, b;

    printf("enter number of rows:");
    scanf("%d", &a);

    printf("enter number of columns:");
    scanf("%d", &b);

    int mat[a][b];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("enter number in (%d,%d):", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("matrix is-\n");

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d\t", mat[i][j]);
        }

        printf("\n");
    }

    printf("transpose of matrix is-\n");
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d\t", mat[j][i]);
        }

        printf("\n");
    }

    printf("\nRaushan Kumar , 125113012");
    return 0;
}