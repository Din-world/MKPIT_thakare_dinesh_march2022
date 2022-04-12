#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
float division;
printf("first number :\n");
scanf("%d",&a);
printf("second number :\n");
scanf("%d",&b);
if(b!=0 && a>=b)
{
division=a/b;
printf("%f",division);
}
else
{
printf("division not possible \n");
}
getch();
}