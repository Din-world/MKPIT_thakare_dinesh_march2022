#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,c;
printf("enter first number x= \n");
scanf("%d",&x);
printf("enter second number y= \n");
scanf("%d",&y);
 if(x!=y)
 {
 c=x+y;
 printf("addition=%d",c);
 }
 else
 {
 c=x*x*x;
 printf("triple value of x= %d",c);
 }
 getch();
 }