#include <stdio.h>

int main()
{
    int n;
    printf("ENTER NUMBER OF ELEMENTS: ");
    scanf("%d", &n);

    int a[n], count[n];

    for (int i = 0; i < n; i++)
    {
        printf("ENTER NUMBER %d: ", i + 1);
        scanf("%d", &a[i]); 
        count[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (count[i] == 1)
        {
            continue;
        }

        int freq = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                freq++;
                count[j] = 1;  
            }
        }

        printf("%d COMES %d TIMES\n", a[i], freq);
    }

    printf("\nRaushan Kumar , 125113012");

    return 0;
}
