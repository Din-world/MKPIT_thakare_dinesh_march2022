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
  if(a[i]==5)
  {
     s=s+1;
  }
  if(a[i]==3)
  {
  c=c+1;
  }
  }
  if(c>s)
  {
  printf("the number of 3's is greater than 5's in the array \n");

  }
  else
  {
  printf("the number of 3's is not greater than 5's");

  }


  getch();
  }
