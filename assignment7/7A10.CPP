#include<stdio.h>
#include<conio.h>
void main()
{
int x,n;
printf("enter the number ");
scanf("%d",&x);
printf("x \tx+2 \tx+4 \t x+6 \n");
printf("==========================\n");
for(n=1;n<=x;n++)
{
printf("%d\t%d\t%d\t%d\n",n,n+2,n+4,n+6);
}
getch();
}