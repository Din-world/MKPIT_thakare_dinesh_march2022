#include<stdio.h>
#include<conio.h>

int p=9,s=8;
float res;
void add();
void sub();
void mul();
void div();
void main()
{
add();
sub();
mul();
div();
clrscr();
}
void add()
{
res=p+s;
printf("addition=%f \n",res);
}
void sub()
{
res=p-s;
printf("substraction=%f \n",res);
}
void mul()
{
res=p*s;
printf("multiplication =%f \n",res);
}
void div()
{
res=p/s;
printf("division=%f\n",res);

getch();
 }