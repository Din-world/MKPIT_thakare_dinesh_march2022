#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;

printf("enter the value x=\n");
scanf("%d",&x);
printf("enter the value y=\n");
scanf("%d",&y);

if(x>=20&&x<=50 ||y>=20&&y<=50 )
{
printf("true");
}
else
{
printf("false");
}
getch();
}