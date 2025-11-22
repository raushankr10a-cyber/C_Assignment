#include <stdio.h>
#include <string.h>

int main()
{
    FILE *f;
    char text[1000];
    
    f = fopen("file1.txt", "r");
    if (f == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    
    while (fgets(text, sizeof(text), f) != NULL);
    
    fclose(f);
    FILE *p;

    p=fopen("file2.txt","w");

    fprintf(p,"%s",text);
    fclose(p);

    printf("\nText written to file successfully.\n");

    printf("\nRaushan Kumar , 125113012");

    return 0;
}
