#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("enter the non nigetive number");
scanf("%d",&a);
if(a%3==0)
{
if( a%7!=0)
printf("number is multiple of 3 ");
}
if(a%7==0)
{
 if(a%3!=0)
printf("number is not multiple of 7");
}
getch();
}