#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,p=0;
float avg=0;
clrscr();
 for(i=1;i<=5;i++)
 {
 printf("enter the number");
 scanf("%d",&a);
  if(a>0)
  {
  p=p++;
  }

 }
 avg=(p*100/5);
 printf("\npossiiive number =%d",p);
 printf("\n average of all possitive number =%f",avg);
 getch();
 }