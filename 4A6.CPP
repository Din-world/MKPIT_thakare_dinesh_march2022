
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter the first number :\n");
scanf("%d",&a);
printf("enter the second value ;\n");
scanf("%d",&b);
printf("all number :\n");

while(a<=b)
{
if(a%7==2 || a%7==3)
{
printf("%d\n",a);
}
a++;
}
getch();
}
