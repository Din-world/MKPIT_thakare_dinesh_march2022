#include<stdio.h>
#include<conio.h>
int rev(int x);
void main()
{
int a,r;
printf("enter the number ");
scanf("%d",&a);
r=rev(a);
printf("reverse =%d",r);
getch();
}
int rev(int x)
{
int res=0,i,b,m;

while(x>=1)
{
b=x%10;
res=res*10+b;
x=x/10;
 printf("%d\n",res);
}
m=res;
return m;

}