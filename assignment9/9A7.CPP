#include<stdio.h>
#include<conio.h>
int main()
{
int x,y,a,b;

printf("enter positive value x=\n");
scanf("%d",&x);
printf("enter positive value y=\n");
scanf("%d",&y);
a=x%10;
b=y%10;
if(a==b)
{
printf("the last digit of the number is same\n");
}
else
{
printf("the last digit of the number is not same\n");
}

getch();
}

