#include<stdio.h>
#include<conio.h>
  void even();
  void wh(int a);
void main()
{
even();
}
void even()
{
int i;
i=1;
wh(i);
}
void wh(int a)
{
while(a<=10)
{
if(a%2==0)
{
printf("even number :%d\n",a);
}
a++;

}
getch();
}