#include<stdio.h>
#include<conio.h>

void main()
{
 int n,i,res;
 printf("enter the number\n");
 scanf("%d",&n);

 printf("multiplication table \n");
  for(i=0;i<=10;i++)
  {
   res=n*i;

   printf("%d\n",res);
  }
 getch();
 }