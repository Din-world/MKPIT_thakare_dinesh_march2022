#include<stdio.h>
#include<conio.h>
void main()
{
float td,fuel,average;   //td=total distance
printf("total distance travel by bike \n");      //distance i km
scanf("%f",&td);
printf("total fuel consume \n");
scanf("%f",&fuel);                               //fuel in liters
average=td/fuel;
printf("average of bike %f \n",average);
getch();
}
