#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,c,sum;
printf("first value : ");
scanf("%f",&a);
printf("\n second value :");
scanf("%f",&b);
printf("\n third value : ");
scanf("%f",&c);
if((a<b+c) && (b<c+a) && (c<a+b))
{
printf("\n it making tringle");
sum=a+b+c;
printf("\n the perimeter of triangle :%f",sum);
}
else
{
printf("it is not valid");
}
getch();
}