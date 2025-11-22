#include <stdio.h>
#include <string.h>

void pal(int a, char ch[])
{
    char ch2[a + 1];

    for (int i = 0; i < a; i++)
    {
        ch2[i] = ch[a - i - 1];
    }

    ch2[a] = '\0';

    if (strcmp(ch, ch2) == 0)
    {
        printf("String is palindrome.\n");
    }

    else
    {
        printf("String is not palindrome.\n");
    }
}

int main()
{
    char ch[100];

    printf("Enter string: ");
    scanf("%s", ch);

    int a = strlen(ch);
    pal(a, ch);

    printf("\nRaushan Kumar , 125113012");
    return 0;
}
