//coordinate system of x,y is
// 1st qudrant=(x,y)
//2nd quadrant=(x,-y)   3rd quadrant=(-x,y)
// 4th quadrant=(-x,-y)

#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;
clrscr();
printf("value of x :\n");
scanf("%d",&x);
printf("value of y :\n");
scanf("%d",&y);

if(x>0 && y>0)
{
printf("it lies in fisrt quadrant \n");
}
else
if(x>0 && y<0)
{
printf("it lies in second quadrant \n");
}
else
if(x<0 && y>0)
{
printf("it lies in third quadrant \n");
}
else
if(x<0 && y<0)
{
printf("it lies in fourth quadrant \n")  ;
}
getch();
}