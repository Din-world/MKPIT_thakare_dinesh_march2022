#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,n;
printf("enter the value of x and n\n");
scanf("%d%d",&x,&n);
if(n>0)
{
y=x*n;
printf("%d",y);
}
else
{
printf("please enter correct value\n");
}
getch();
}