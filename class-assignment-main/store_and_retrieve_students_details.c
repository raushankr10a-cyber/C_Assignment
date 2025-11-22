#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    char branch[100];
    int roll;
    float marks;
};

int main()
{
    int a;

    printf("Enter number of students: ");
    scanf("%d", &a);

    struct student s[a];

    for (int i = 0; i < a; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter branch: ");
        scanf("%s", s[i].branch);

        printf("Enter roll no.: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    FILE *f = fopen("students.txt", "w");

    if (f == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    for (int j = 0; j < a; j++)
    {
        fprintf(f, "Student %d details:\n", j + 1);
        fprintf(f, "Name: %s\n", s[j].name);
        fprintf(f, "Branch: %s\n", s[j].branch);
        fprintf(f, "Roll: %d\n", s[j].roll);
        fprintf(f, "Marks: %f\n\n", s[j].marks);
    }

    fclose(f);

    char text[5000];

    FILE *fr = fopen("students.txt", "r");

    if (fr == NULL)
    {
        printf("Error opening file for reading!");
        return 1;
    }

    while (fgets(text, sizeof(text), f) != NULL)
    {
        printf("%s", text);
    }

    fclose(fr);

    printf("\nRaushan Kumar , 125113012");

    return 0;
}
