#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;

printf("enter the value x=\n");
scanf("%d",&x);
printf("enter the value y=\n");
scanf("%d",&y);
if(x>=40&&x<=50 ||y>=40&&y<=50)
{
printf("it is in the range 40..50\n");
}
else
if(x>=50&&x<=60 ||y>=50&&y<=60)
{
printf("it is in the range of 50..60\n");
}
else
{
printf("it not in any range");
}
getch();
}
