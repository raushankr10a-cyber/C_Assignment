#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int l = 0;

    printf("Enter string: ");
    scanf("%s", str1);

    for (int i = 0; str1[i] != '\0'; i++)
    {
        l++;
    }

    for (int j = 0; j < l; j++)
    {
        str2[j] = str1[j];
    }
    str2[l] = '\0';

    printf("Second string is %s", str2);

    printf("\nRaushan Kumar , 125113012");

    return 0;
}