#include<stdio.h>
#include<conio.h>
int i=1;
void fun();
void main()
{
clrscr();
fun();
}
void fun()
{ static int i=1;

 if(i==10)
return;
printf("my name\n");

i++;
fun();
getch();
}