#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,sum,c;
printf("enter first number :");
scanf("%d",&a);
printf("enter second number :");
scanf("%d",&b);
sum=0;
printf("sum of all number not divisible by 17 :\n");
while(a<=b)
{
if(a/17!=0)
{
c=a;
sum=sum+c;
}
a++;
}
printf("%d",sum);
getch();
}

