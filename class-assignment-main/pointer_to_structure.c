#include <stdio.h>

struct student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct student s1;             
    struct student *ptr;     

    ptr = &s1;           

    printf("Enter name: ");
    scanf("%s", ptr->name);    

    printf("Enter roll number: ");
    scanf("%d", &ptr->roll);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    printf("\nStudent Details\n");
    printf("Name  : %s\n", ptr->name);
    printf("Roll  : %d\n", ptr->roll);
    printf("Marks : %f\n", ptr->marks);

    ptr->marks += 5;

    printf("\nAfter bonus marks:\n");
    printf("Updated Marks: %f\n", ptr->marks);

    printf("\nRaushan Kumar , 125113012"); 

    return 0;
}
