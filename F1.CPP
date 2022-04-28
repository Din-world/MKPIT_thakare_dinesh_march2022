#include<stdio.h>
#include<conio.h>
void main()
{
int p,e,t;
printf("total energy cinsumption \n");
scanf("%d",&e);
printf("time in second \n");
scanf("%d",&t);

printf("power consumption =\n");
p=e/t;
printf("%d",p);
getch();
}