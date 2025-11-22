#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int l = 0;

    printf("Enter string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        l++;
    }

    printf("string lenth is %d", l);

    printf("\nRaushan Kumar , 125113012");

    return 0;
}