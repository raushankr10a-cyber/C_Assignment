#include <stdio.h>

int main()
{
    FILE *f;
    char word[100];
    int wordCount = 0, lineCount = 0, charCount = 0;

    f = fopen("data.txt", "r");
    if (f == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    while (fscanf(f, "%s", word) == 1)
    {
        wordCount++;

        for (int i = 0; word[i] != '\0'; i++)
        {
            charCount++;
        }
    }

    rewind(f);

    char ch;
    while ((ch = fgetc(f)) != EOF)
    {
        if (ch == '\n')
            lineCount++;
    }

    fclose(f);

    if (charCount > 0 && ch != '\n')
        lineCount++;

    printf("Total Words: %d\n", wordCount);
    printf("Total Characters (excluding spaces): %d\n", charCount);
    printf("Total Lines: %d\n", lineCount);

    printf("\nRaushan Kumar , 125113012");

    return 0;
}
