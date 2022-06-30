#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,n;
printf("enter the element\n");
scanf("%d",&n);
printf("enter the array \n");
for(i=0;i<n;i++)
{
 printf("a[%d]= ",i);
 scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  if(a[i]==15 && a[i+1]==15)
  {
  printf("true");
  }
  }


getch();
}
