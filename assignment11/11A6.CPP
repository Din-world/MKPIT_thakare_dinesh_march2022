#include<stdio.h>
#include<conio.h>

void main()
{
int a[2],a1[2];
int i;
printf("enter the array number\n");
for(i=0;i<3;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
}

  for(i=0;i<3;i++)
  {
    if(i==1)
    continue;
    printf(" a1[%d]=%d\n",i,a[i]);
    }

getch();
}