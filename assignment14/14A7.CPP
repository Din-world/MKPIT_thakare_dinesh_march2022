#include<stdio.h>
#include<conio.h>

void main()
{
  int a[100],i,n,c;
  printf("enter the number of array \n");
  scanf("%d",&n);
  printf("enter the array\n");
  for(i=0;i<n;i++)
  {
  printf("a[%d]=",i);
  scanf("%d",&a[i]);
  }
     c=n-1;
  for(i=n-1;i>=0;i--)
  {
    if(a[i]!=0)
    {
     a[c]=a[i];
      c--;
    }
   }
   for(i=n-1;i>=0;i--)
   {
    a[c]=0;
    c--;
  }
   printf("new array\n");
   for(i=0;i<n;i++)
   {
    printf("a[%d]=%d\n",i,a[i]);
    }
  getch();
  }