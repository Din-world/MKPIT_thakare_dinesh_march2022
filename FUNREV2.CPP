#include<stdio.h>
#include<conio.h>
void rev();
void cal(int x);
void main()
{
rev();
}
void rev()
{
int t;
printf("enter3 digit number ");
scanf("%d",&t);
cal(t);
}
void cal(int x)
{
int a,res=0,x,m,i;
a=x%10;
res=res*10+a;
x=x/10;
i=x%10;
res=res*10+i;
x=x/10;
m=x%10;
res=res*10+m;


printf("reverse =%d",res);

getch();
}