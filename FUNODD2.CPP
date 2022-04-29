#include<stdio.h>
#include<conio.h>
void odd();
void wh(int a);
void main()
{
odd();
}
void odd()
{
int i;
i=1;
wh(i);
}
void wh(int a)
{
while(a<=10)
{
if(a%2!=0)
printf("odd number :%d\n",i);
a++;
}
getch();
}
