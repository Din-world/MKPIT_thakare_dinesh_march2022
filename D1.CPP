#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter n digit number :\n");
scanf("%d",&a);
b=0;
printf("numbers up to %d \n",a);
while(b<=a)
{
printf("%d\n",b);
b++;
}
getch();
}