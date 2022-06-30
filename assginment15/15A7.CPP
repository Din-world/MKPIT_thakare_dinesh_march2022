#include<stdio.h>
#include<conio.h>
void main()
{
  int temp;
  printf("enter the temperature in degree celcius  : ");
  scanf("%d",&temp);

  printf("\n temperature (kelvin)= %d",temp+273);

  printf("\n temperature (fahrenheit)= %d",temp*1.8+32);

  getch();
  }