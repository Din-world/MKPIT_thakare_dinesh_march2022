#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,sum;
printf("enter two integer");
scanf("%d%d",&x,&y);
    sum=x+y;
if(x==30 || y==30 || sum==30)
{
  printf("true");
}
else
{
printf("false");
}
getch();
}