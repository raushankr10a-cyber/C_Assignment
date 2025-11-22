#include<stdio.h>

int main()
{
int a, b, *p1 ,*p2;

p1=&a;
p2=&b;

printf("Enter first number: ");
scanf("%d",&a);

printf("Enter second number: ");
scanf("%d",&b);

printf("Before swaping a=%d and b=%d\n",a,b);

int temp;
temp=*p1;
*p1=*p2;
*p2=temp;

printf("After swaping a=%d and b=%d\n",a,b);

printf("\nRaushan Kumar , 125113012");

    return 0;
}