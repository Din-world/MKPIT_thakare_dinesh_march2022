#include<stdio.h>
#include<conio.h>
void add();
void main()
 {
  add();
}
void add()
{
int x,y,multi;
printf("enter the value of x:\n");
scanf("%d",&x);
printf("enter the value of y :\n");
scanf("%d",&y);
multi=x*y;
printf("%d",multi);

getch();
}
