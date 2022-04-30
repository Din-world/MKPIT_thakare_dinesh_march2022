#include<stdio.h>
#include<conio.h>
void main()
{
int t1,t2;

printf("enter the temp. t1=\n");
scanf("%d",&t1);
printf("enter the temp. t2=\n");
scanf("%d",&t2);
if(t1<0&&t2>100 )
{
printf("temp t1 is zero and other of greater than 100");
}
else
if(t2>0&&t2<100)
{
printf("temp t1 is not zero and other is not greater than 100");
}
else
{
printf("temp t1 is not zero and other than less than 100 ");
}
getch();
}
