#include<stdio.h>
#include<conio.H>
void main()
{
int num,n1,n2,n3,addition;
printf("enter 3 digit numnber");
scanf("%d",&num);
n1=num%10;
num=num/10;
n2=num%10;
num=num/10;
n3=num%10;
 addition=n1+n2+n3;
printf("additon=%d",addition);
getch();
}