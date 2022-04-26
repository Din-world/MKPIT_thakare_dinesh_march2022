#include<stdio.h>
#include<conio.h>
void main()
{
int a,n,rev=0;
printf("enter the number a= ");
scanf("%d",&a);
while(a>=1)
{
n=a%10;
rev=rev*10+n;
a=a/10;
}
printf("after reverse number a= %d",rev);
getch();
}

