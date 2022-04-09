#include<stdio.h>
#include<conio.h>
void main()
{
char id;
int salary;
float hour,amount;
printf("enter employed id : ");
scanf("%c",&id);

printf("\n total hours he worked : ");
scanf("%f",&hour);

printf("\n amout get per hours : ");
scanf("%f",&amount);

salary=hour*amount;
printf("total salary :%d",salary);
getch();
}
