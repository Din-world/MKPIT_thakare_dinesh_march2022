#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;

printf("enter the value x=\n");
scanf("%d",&x);
printf("enter the value y=\n");
scanf("%d",&y);
if(x>=100&&x<=200 ||y>=100&&y<=200)
{
printf("%d and %d it is in the range of 100..200\n");
}
else
{
printf("it is not in range");
}
getch();
}
