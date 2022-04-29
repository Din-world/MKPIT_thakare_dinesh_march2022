#include<stdio.h>
#include<conio.h>
void add();
void main()
 {
  add();
}
void add()
{
int x,y,div;
printf("enter the value of x:\n");
scanf("%d",&x);
printf("enter the value of y :\n");
scanf("%d",&y);
if(x>y)
{
div=x/y;
printf("%d",div);
}
else
{
div=y/x;
printf("%d",div);

getch();
}
