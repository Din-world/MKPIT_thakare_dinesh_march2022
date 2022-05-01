#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,z;

printf("enter the value x=\n");
scanf("%d",&x);
printf("enter the value y=\n");
scanf("%d",&y);
printf("enter the value z=\n");
scanf("%d",&z);
if(x>=20&&x<=50 ||y>=20&&y<=50 ||z>=20&&z<=50)
{
printf("true");
}
else
{
printf("false");
}
getch();
}