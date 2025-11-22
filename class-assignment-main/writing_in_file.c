#include <stdio.h>
#include <string.h>

int main()
{
    FILE *f;
    char text[1000];

    f = fopen("file.txt", "w");
    if (f == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text that you want to write in file:\n");
    fgets(text, sizeof(text), stdin);

    fprintf(f, "%s", text);
    fclose(f);
    
    printf("\nRaushan Kumar , 125113012");

    return 0;
}
