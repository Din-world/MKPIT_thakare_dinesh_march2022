#include<stdio.h>
#include<conio.h>

void main()
{
int a[2];
int i;
printf("enter the array number\n");
for(i=0;i<=2;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
}
printf("the new array are:");
  for(i=0;i<=2;i++)
  {
    if(a[i]==5&& a[i+1]==7)
      a[i+1]=1;
    printf("a[%d]=%d\n",i,a[i]);

  }

getch();
}