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
 int x,y;
printf("enter the first number");
scanf("%d",&x);
printf("enter the second value \n");
scanf("%d",&y);
if(x==5 || y==5|| x+y==5||x-y==5)
{
return 1;
}
else
{
return 0;
}
}
