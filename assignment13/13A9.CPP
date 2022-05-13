#include<stdio.h>
#include<conio.h>

void main()
{
  int a[100],i,n,s=0,c=0;
  printf("enter the number of array n= ");
  scanf("%d",&n);
  printf("enter the array\n");
  for(i=0;i<=n;i++)
  {
  scanf("%d",&a[i]);
  }
  for(i=0;i<=n;i++)
  {
  if(a[i]%2==0 && a[i+1]%2==0)
  {
     s=s+1;
  }
  if(a[i]%2!=0 && a[i+1]%2!=0)
  {
  c=c+1;
  }
  }
  if(c==1 || s==1)
  {
  printf("true \n");
  }
  else
  {
  printf("false");
  }

  getch();
  }
