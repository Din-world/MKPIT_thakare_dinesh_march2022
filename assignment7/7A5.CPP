#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;
printf("enter first integer =\n");
scanf("%d",&x);
printf("\n enter second integer =");
scanf("%d",&y);
if(x%y==0)
{
printf("%d is multiple of %d",x,y);
}
else
{
printf("%d is not multiple of %d",x,y);
}
getch();
}