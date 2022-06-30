#include<stdio.h>
#include<conio.h>

void main()
{
  int a[100],i,n,c=0;
  printf("enter the number of array \n");
  scanf("%d",&n);
  printf("enter the array\n");
  for(i=0;i<n;i++)
  {
  printf("a[%d]=",i);
  scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(a[i]%2==0)
    {
     a[c]=a[i];
      c++;
    }
   }
   for(i=c;i<n;i++)
   {
    a[c]=a[i];
    c++;
    }

    printf("new array \n");
    for(i=0;i<n;i++)
    {
    printf("a[%d]=%d\n",i,a[i]);
    }
  getch();
}
