#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i;
clrscr();
for(i=0;i<5;i++)
{
printf("a[%d]= ",i);
scanf("%d",&a[i]);
}
printf("\n number is less than 5 :");
for(i=0;i<5;i++)
{
if(a[i]<5)
{
printf("\n a[%d]= ",i);
printf("%d",a[i]);
}
 }

 getch();
 }
