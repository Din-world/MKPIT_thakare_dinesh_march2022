#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
printf("enter first number a= ");
scanf("%d",&a);
printf("\n enter second number b= ");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("\n after swaping");
printf("\n a=%d b=%d",a,b);
getch();
}
