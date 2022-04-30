#include<stdio.h>
#include<conio.h>
void main()
{
int x;
printf("enter the positive number x=\n");
scanf("%d",&x);
if(x%3==0)
{
printf("number is multiple of 3");
}
else
if(x%7==0)
{
printf("number is multiple of 7");
}
else
{
printf("number is not multiple of 3 or 7");
}
getch();
}