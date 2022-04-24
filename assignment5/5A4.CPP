#include<stdio.h>
#include<conio.h>
void main()
{
int a[7],i;
clrscr();
printf("enter element :");
for(i=0;i<7;i++)
{  printf("a[%d]=",i);
scanf("%d",&a[i]);
if(a[i]<=0)
{  a[i]=100;
printf("%d\n",a[i]);
}
printf("\n");
}

getch();
}

