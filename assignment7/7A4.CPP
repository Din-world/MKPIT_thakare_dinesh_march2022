#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;
printf("enter any negetive value :\n");
scanf("%d",&x);
if (x<=0)
{
y=x*(-1);
}
else
{
printf("error");
}
printf("%d",y);
getch();
}