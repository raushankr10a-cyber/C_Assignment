#include<stdio.h>

struct emp
{
    char name[50],add[100],post[50];
    float salary;
};

void display(struct emp e)
{
    printf("EMPLOYEE DETAILS-\n");
    printf("NAME: %s\n",e.name);
    printf("ADDRESS: %s\n",e.add);
    printf("POST: %s\n",e.post);
    printf("SALARY: %f\n",e.salary);
}
int main()
{
struct emp e;

printf("ENTER EMPLOYEE NAME: ");
scanf("%s",e.name);

printf("ENTER EMPLOYEE POST: ");
scanf("%s",e.post);

printf("ENTER EMPLOYEE ADDRESS: ");
scanf("%s",e.add);

printf("ENTER EMPLOYEE SALARY: ");
scanf("%f",&e.salary);

display(e);

printf("\nRaushan Kumar , 125113012");

    return 0;
}