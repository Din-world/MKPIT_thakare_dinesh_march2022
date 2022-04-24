#include<stdio.h>
#include<conio.h>
void main()
{
int i,a;
clrscr();
printf("enter the number :");
scanf("%d",&a);
printf("number is divisble by \n: ");
for(i=1;i<=a;i++)
{
if(a%i==0)
{
printf("%d\n",i);
}
}
getch();
}