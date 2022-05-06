#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter the three number ");
scanf("\n %d%d%d",&a,&b,&c);
if(a==b+c || b==a+c || c==a+b)
{
printf("possible to add");
 }
 else
 {
 printf("not possible to add");
 }

getch();
}
