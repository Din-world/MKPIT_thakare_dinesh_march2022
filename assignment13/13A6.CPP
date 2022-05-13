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
  if(a[i]==5 && a[i+1]==5)
  {
     s=s+1;
  }
  if(a[i]==3 && a[i+1]==3)
  {
  c=c+1;
  }
  }
  if(c==1 && s==1)
  {
  printf("it contain both 3's next to 3's and 5's next to 5's \n");

  }
  else
  if(c==1)
  {
  printf("it contain number 3's next to 3's");
  }
  else
  if(s==1)
  {
  printf("it contain 5's next to 5's");
  }
  else
  {
  printf("not contain");
  }

  getch();
  }
