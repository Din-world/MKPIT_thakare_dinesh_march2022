#include<stdio.h>
#include<conio.h>

void fun(int a); //function prototype
void main()
{
fun(1);   //function called in main
}
void fun(int a)
{   clrscr();
if(a==10)
return;
printf("%d",a);
fun(a+1);
printf("%d",a);
getch();
}