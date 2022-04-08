#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter the three intiger \n");
scanf("%d %d %d",&a,&b,&c);
if(a>b  && a>c)
{
printf("a is maximum");
}
if(b>a && b>c)
{
printf("b is maximum \n");
}
if(c>a && c>b)
{
printf("c is maximum");
}
getch();
}