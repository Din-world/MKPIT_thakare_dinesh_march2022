#include<stdio.h>
#include<conio.h>
void fun(int x,int y);
void main()
{
clrscr();
int a=2,b=3;
printf("a=%d b=%d",a,b);
fun(a,b);
printf("a=%d b=%d",a,b);
getch();
}
void fun(int x,int y)
{
x=12;
y=13;
}