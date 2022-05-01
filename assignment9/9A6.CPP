#include<stdio.h>
#include<conio.h>
int main()
{
int x,y;

printf("enter the value x=\n");
scanf("%d",&x);
printf("enter the value y=\n");
scanf("%d",&y);
if(x>=20&&x<=30 ||y>=20&&y<=30)
{
if(x<y)
{
printf("y=%d is greater than x=%d\n",y,x);
}
else
{
printf("x=%d is greater than y=%d\n",x,y);
}
}
else
{
return 0;
}
getch();
}
