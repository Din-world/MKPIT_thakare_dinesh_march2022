#include<stdio.h>
#include<conio.h>

void main()
{
  int a[100],i,n;
  printf("enter the number of array \n");
  scanf("%d",&n);
  printf("enter the array\n");
  for(i=0;i<n;i++)
  {
  printf("a[%d]=\n",i);
  scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
  if(a[i+1]>a[i] &&a[i+2]>a[i+1])
  {
  printf("true");
  break;
  }
  else
  {
  printf("false");
  printf("%d %d",a[i],a[i+1]);
  break;
  }
  }
  getch();
  }
