#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    int marks;
};

int main()
{
    int a;

    printf("NUMBER OF STUDENTS:");
    scanf("%d", &a);

    struct student ch[a];

    for (int i = 0; i < a; i++)
    {

        printf("FOR STUDENT %d\n", i + 1);

        printf("ENTER NAME OF STUDENT: ");
        scanf("%s", ch[i].name);

        printf("ENTER MARKS OF STUDENT :");
        scanf("%d", &ch[i].marks);
    }

    for (int i = 0; i < a - 1; i++)
    {

        if (ch[i].marks > ch[i + 1].marks)
        {
            int temp = ch[i].marks;
            ch[i].marks = ch[i + 1].marks;
            ch[i + 1].marks = temp;

            char t[50];
            strcpy(t, ch[i].name);
            strcpy(ch[i].name, ch[i + 1].name);
            strcpy(ch[i + 1].name, t);
        }
    }

    printf("STUDENT WITH MAXIMUM MARKS -\n");
    printf("NAME: %s\n", ch[a - 1].name);
    printf("MARKS: %d\n", ch[a - 1].marks);

    printf("\nRaushan Kumar , 125113012");

    return 0;
}