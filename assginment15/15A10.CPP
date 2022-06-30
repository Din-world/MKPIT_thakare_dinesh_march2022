#include<stdio.h>
#include<conio.h>
void main()
{
int m,n;
printf("enter the number  ");
scanf("%d",&m);
if(m!=0)
{
  if(m>0)
 {
  n=1;
 printf(" the value n: %d",n);
 }
 else
 if(m==0)
 {
  n=0;
  printf(" the value n :%d",n);
 }
 else
 if(m<0)
 {
  n=-1;
  printf(" the value n : %d",n);
  }
 }
  getch();
  }