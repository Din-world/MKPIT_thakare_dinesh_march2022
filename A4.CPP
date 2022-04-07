#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,n3,rev,num;
printf("enter3 digit number\n");
scanf("%d",&num);

n1=num%10;
num=num/10;
n2=num%10;
num=num/10;
n3=num%10;

rev=n1*100+n2*10+n3*1;

printf("reverse number =%d",rev);
getch();
}