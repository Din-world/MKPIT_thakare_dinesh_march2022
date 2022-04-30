#include<stdio.h>
#include<conio.h>
void main()
{
int pm,ri,d,si;
printf("enter principal amount rate of intrest and days");
scanf("%d %d %d",&pm,&ri,&d);
si=pm*ri*d/365;
printf("simple intrest = %d",si);
getch();
}