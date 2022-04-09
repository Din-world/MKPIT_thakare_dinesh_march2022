#include<stdio.h>
#include<conio.h>
void main()
{
float h,m,s,sec,time;
print("enter the time :");
scanf("%f",&sec);
 h=sec/3600;   //h=hours=3600sec
 m=sec/60;       //m=minute=60 sec
 s=sec;
 printf("time=%f : %f : %f : \n",h,m,s);
 getch();
 }
