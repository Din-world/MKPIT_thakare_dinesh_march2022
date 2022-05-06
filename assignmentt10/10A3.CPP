#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("enter the number ");
scanf("%d",&a);
if(a%13==0 )
{
printf("it is muliple of 13\n");
}
else
if(a%13==1)
{
printf("it is one more than multiple of 13\n");
}
getch();
}
