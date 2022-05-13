#include<stdio.h>
#include<conio.h>

void main()
{
  int a[100],i,n,s=0;
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
     s=s+5;
  }
  }
  if(s==15)
  {
  printf("the sum of all 5's exactly 15 \n");

  }
  else
  {
  printf("the sum of all 5's not exactlt 15");

  }


  getch();
  }
