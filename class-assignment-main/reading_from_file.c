#include <stdio.h>
#include <string.h>

int main()
{
    FILE *f;
    char text[1000];

    f = fopen("file.txt", "r");
    if (f == NULL)
    {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\nReading content from file:\n");

    while (fgets(text, sizeof(text), f) != NULL)
    {
        printf("%s", text);
    }

    fclose(f);

    printf("\nRaushan Kumar , 125113012");

    return 0;
}
