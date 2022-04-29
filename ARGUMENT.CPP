#include<stdio.h>
#include<conio.h>
void add(int x,int y);

void fun();
void main()
{
fun();
}
void fun()
{
int a=3,b=5;
add(a,b);
}

void add(int x,int y)
{
int sum;
sum=x+y;

printf("addition =%d",sum);
getch();
}