#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    int n, i, j;

    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[n];
    struct Student temp;

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (s[i].roll > s[j].roll)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\nStudent Records (Sorted by Roll Number)\n");
    for (i = 0; i < n; i++)
    {
        printf("Roll: %d\tName: %s\tMarks: %f\n", s[i].roll, s[i].name, s[i].marks);
    }

    printf("\nRaushan Kumar , 125113012");
    return 0;
}
