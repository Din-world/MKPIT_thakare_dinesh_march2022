#include<stdio.h>
#include<conio.h>
int i=1;
void fun();
void main()
{
clrscr();
printf("even numbers");
fun();

}
void fun()
{

if(i==21 )
return;
if(i%2==0)
printf("%d\n",i);
i++;
fun();
getch();
}
