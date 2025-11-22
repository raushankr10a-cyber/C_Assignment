#include <stdio.h>
#include <string.h>

struct book
{
    char name[50];
    int price;
};

int main()
{
    int a;

    printf("NUMBER OF BOOKS:");
    scanf("%d", &a);

    struct book ch[a];

    for (int i = 0; i < a; i++)
    {

        printf("FOR BOOK %d\n", i + 1);

        printf("ENTER NAME OF BOOK: ");
        scanf("%s", ch[i].name);

        printf("ENTER PRICE OF BOOK :");
        scanf("%d", &ch[i].price);
    }

    printf("\n");
    for (int i = 0; i < a; i++)
    {
        if (ch[i].price > 500)
        {
            printf("BOOK NAME \"%s\" AND PRICE IS %d\n", ch[i].name, ch[i].price);
        }
    }

    printf("\nRaushan Kumar , 125113012");

    return 0;
}