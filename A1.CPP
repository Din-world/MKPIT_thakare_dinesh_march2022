#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,c,m;
printf("weight of the first item\n  ");
scanf("%f",&a);
printf("weight of the decond item\n ");
scanf("%f",&b);
printf("number of purchase");
scanf("%f",&c);
m=(a+b)/c;
printf("the average value of the item %f",m);
getch();
}