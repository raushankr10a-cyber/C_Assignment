#include <stdio.h>
#include <string.h>

int main()
{
    FILE *f1, *f2, *f3;
    char text[1000];

    f1 = fopen("file1.txt", "r");
    if (f1 == NULL)
    {
        printf("Error opening file1.txt for reading!\n");
        return 1;
    }

    f2 = fopen("file2.txt", "r");
    if (f2 == NULL)
    {
        printf("Error opening file2.txt for reading!\n");
        fclose(f1);
        return 1;
    }

    f3 = fopen("file3.txt", "w");
    if (f3 == NULL)
    {
        printf("Error opening file3.txt for writing!\n");
        fclose(f1);
        fclose(f2);
        return 1;
    }

    while (fgets(text, sizeof(text), f1) != NULL)
    {
        fprintf(f3, "%s", text);
    }

    while (fgets(text, sizeof(text), f2) != NULL)
    {
        fprintf(f3, "%s", text);
    }

    printf("Contents of file1.txt and file2.txt successfully merged into file3.txt\n");

    fclose(f1);
    fclose(f2);
    fclose(f3);

    printf("\nRaushan Kumar , 125113012");

    return 0;
}
