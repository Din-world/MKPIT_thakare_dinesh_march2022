#include<stdio.h>
#include<conio.h>
void rev();
void main()
{
rev();
}
void rev()
{
int res=0,i,x,a,m;
printf("enter the number ");
scanf("%d",&x);
a=x;
while(x<0)
{
a=x%10;
res=res*10+a;
x/10;

}
printf("reverse =%d",res);

getch();
}