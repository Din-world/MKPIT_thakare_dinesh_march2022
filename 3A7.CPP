#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,p=0,n=0;
clrscr();
 for(i=1;i<=5;i++)
 {
 printf("enter the number");
 scanf("%d",&a);
  if(a>0)
  {
  p=p++;
  }
  else
  {
  n=n++;
 }
 }
 printf("\npossiiive number =%d",p);
 printf("\n negetive number =%d",n);
 getch();
 }