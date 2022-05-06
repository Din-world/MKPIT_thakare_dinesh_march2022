#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,z;
printf("enter the three number ");
scanf("\n %d%d%d",&x,&y,&z);
if(x>y&&x>z&&y>z)
{
  if(x-y==y-z)
  printf("true");
}
if(x>y&&x>z&&z>y)
{
if(x-z==z-y)
printf("true");
}
if(y>x&&y>z&&x>z)
{
if(y-x==x-z)
printf("true");
}
if(y>x&&y>z&&z>x)
{
if(y-z==z-x)
printf("true");
}
if(z>x&&z>y&&x>y)
{
if(z-x==x-y)
printf("true");
}
if(z>x&&z>y&&y>x)
{
if(z-y==y-x)
printf("true");
}
getch();
}


