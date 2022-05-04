#include<stdio.h>
#include<conio.h>

void fun();
void main()
{
clrscr();
printf("even numbers");
fun();

}
void fun()
{
static int i=1;
if(i==21 )
return;
if(i%2==0)
printf("%d\n",i);
i++;
fun();
getch();
}
