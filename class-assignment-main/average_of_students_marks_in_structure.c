#include <stdio.h>

struct student
{
    int marks;
};

int main()
{
    int a, sum = 0;
    float avg;

    printf("NUMBER OF STUDENTS:");
    scanf("%d", &a);

    struct student ch[a];

    for (int i = 0; i < a; i++)
    {

        printf("FOR STUDENT %d\n", i + 1);
        printf("ENTER MARKS OF STUDENT :");
        scanf("%d", &ch[i].marks);
    }

    for (int j = 0; j < a; j++)
    {
        sum += ch[j].marks;
    }

    avg = (float)sum / a;

    printf("AVERAGE MARKS OF ALL STUDENTS ARE %f", avg);

    printf("\nRaushan Kumar , 125113012");

    return 0;
}