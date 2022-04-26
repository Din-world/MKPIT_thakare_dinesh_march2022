#include<stdio.h>
#include<conio.h>
void main()
{
float distance;
float a=2.54,v;    //1 inch=2.54cm
printf("enter the distance= ");
scanf("%f",&distance);

printf("value in inches ");
v=distance /a;
printf("%.2f",v);
getch();
}
