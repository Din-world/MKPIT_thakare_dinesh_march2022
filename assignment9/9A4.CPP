#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,a,b;

printf("enter the value x=\n");
scanf("%d",&x);
printf("enter the value y=\n");
scanf("%d",&y);
a=100-x;
b=100-y;
if(a<b)
{
printf("%d is nearest to 100 \n",x);
}
else
if(b<a)
{
printf("%d is nearest to 100\n",y);
}
else
if(a==b)
{
return 0;
}
else
{
printf("error");
}
getch();
}


