#include<stdio.h>
#include<conio.h>

void fun(int i);
void main()
{
int a;
clrscr();
printf("enter the number ");
scanf("%d",&a);
printf("reverse number =");
fun(a);
}
void fun(int i)
{
int c=0,n;

if(i<=0)
return;
{
 n=i%10;
 c=c*10+n;
 i=i/10;


 }
printf("%d",c);
 fun(i--);


getch();
}
