#include<stdio.h>
#include<conio.h>

void main()
{
int a[2];
int i;
printf("enter the array number\n");
for(i=0;i<2;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
}

  for(i=0;i<2;i++)
  {
    if(a[0]==10 && a[1]==10 || a[0]==20 && a[1]==20)
    printf("true");
  }

getch();
}