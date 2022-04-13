//enterx,y from key. find the power:

#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,i,pow=1;
printf("enter the number : ");
scanf("%d",&x);
printf("enter the power : \n");
scanf("%d",&y);
i=1;
while(i<=y)
{
pow=pow*x;
i++;
}
printf("answer =%d\n",pow);
getch();
}
