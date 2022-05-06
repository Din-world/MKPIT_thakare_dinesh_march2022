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
printf("in reverse way the array are:");
for(i=4;i>=0;i--)
{
printf("\n a[%d]=%d",i,a[i]);
}

getch();
}