#include<stdio.h>
#include<conio.h>
void main()
{                             //inter in the range 0 to 80
int a;
printf("enter the integer : ");
scanf("%d",&a);
if((a>=0) && (a<=80))
{
printf(" it is in range");
}
else
{
printf("error..");
}
getch();
}