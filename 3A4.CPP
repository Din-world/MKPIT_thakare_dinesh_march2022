#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
printf("first integer is\n ");
scanf("%d",&a);
printf("second integer is \n");
scanf("%d",&b);
if(a>b)
{
int d;
d=a ;
b=d;
b=a;
}
if(a%b==0)
{
printf("number is multiplied\n");
}
else
{
printf("number is not multiplied\n");
}
getch();
 }
