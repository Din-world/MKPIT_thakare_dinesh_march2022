#include<stdio.h>
#include<conio.h>

void main()
{
int a[4];
int i;
printf("enter the array number\n");
for(i=0;i<4;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
}

printf("element in new array\n");
printf("%d%d%d%d",a[1],a[2],a[3],a[0]);

getch();
}