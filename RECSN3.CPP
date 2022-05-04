#include<stdio.h>
#include<conio.h>
void fun(int i);
void main()
{
clrscr();
fun(1);
}
void fun(int i)
{

 if(i==10)
return;
printf("my name\n");


fun(i+1);
getch();
}