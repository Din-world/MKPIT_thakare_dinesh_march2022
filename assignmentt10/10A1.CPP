#include<stdio.h>
#include<conio.h>
int fun();
void main()
{
 int i;
i=fun();
printf("%d",i);
getch();
}
 int fun()
 {
 int x,y,sum;
printf("enter the first number");
scanf("%d",&x);
printf("enter the second value \n");
scanf("%d",&y);
sum=x+y;
if(sum>=10 &&sum<=20)
{
 return 30;
 }
 else
 {
 printf("%d",sum);
 }
 getch();
 }