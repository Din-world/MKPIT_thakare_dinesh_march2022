#include<stdio.h>
#include<conio.h>
void add();
void main()
 {
  add();
}
void add()
{
int x,y,sum;
printf("enter the value of x:\n");
scanf("%d",&x);
printf("enter the value of y :\n");
scanf("%d",&y);
sum=x+y;
printf("%d",sum);

getch();
}
