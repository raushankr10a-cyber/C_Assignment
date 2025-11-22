#include <stdio.h>

int main()
{
    char text[100];
    FILE *fp;

    fp = fopen("file2.txt", "a");
    if (fp == NULL)
    {
        printf("!! ERROR OPENING FILE FOR WRITING\n");
        return 1;
    }

    printf("ENTER TEXT TO APPEND TO FILE: ");
    fgets(text, sizeof(text), stdin);
    fprintf(fp, "%s", text);

    fclose(fp);

    fp = fopen("file.txt", "r");
    if (fp == NULL)
    {
        printf("!! ERROR OPENING FILE FOR READING\n");
        return 1;
    }

    printf("\nCONTENT OF FILE:\n");

    while (fgets(text, sizeof(text), fp) != NULL)
    {
        printf("%s", text);
    }

    fclose(fp);

    printf("\nRaushan Kumar , 125113012");

    printf("\nRaushan Kumar , 125113012");

    return 0;
}
