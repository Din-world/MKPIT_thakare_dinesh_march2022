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
  if(a[i]==5&& a[i+1]==5)
  {
     s=s+1;
  }
  }
  if(s==1)
  {
  printf("the sequence is present in array\n");

  }
  else
  {
  printf("the sequence is not present in array\n");

  }


  getch();
  }
