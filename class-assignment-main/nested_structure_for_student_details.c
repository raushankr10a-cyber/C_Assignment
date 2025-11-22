#include <stdio.h>
#include<string.h>

struct date {
    int day;
    int month;
    int year;
};

struct student {
    char name[50];
    int roll;
    struct date dob;
};

int main() {
    struct student s1;

    printf("Enter student name: ");
    scanf("%s", s1.name);

    printf("Enter date of birth (dd mm yyyy): ");
    scanf("%d %d %d", &s1.dob.day, &s1.dob.month, &s1.dob.year);

    printf("\nStudent Details\n");
    printf("Name: %s\n", s1.name);
    printf("Date of Birth: %d-%d-%d\n", s1.dob.day, s1.dob.month, s1.dob.year);

    printf("\nRaushan Kumar , 125113012");
    return 0;
}
