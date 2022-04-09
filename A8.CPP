#include<stdio.h>
#include<conio.h>
void main()
{
int y,m,d,days;
printf("enter days :\n");
scanf("%d",&days);
y=days/365;         //y=year=365 days
m=days/30;         //m=month=30 days
d=days;                             //d=days
printf("days = %d : %d : %d",y,m,d);
getch();
}
