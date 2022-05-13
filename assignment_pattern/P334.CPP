#include<stdio.h>
#include<conio.h>

void main()
{
int i,sp,j;
clrscr();
for(i=1;i<=4;i++)
{
for(sp=1;sp<=40-i;sp++)
{
 printf(" ");
 }
 for(j=1;j<=i;j++)
 {
  if(i==1)
  printf(" %d",i);
   if(i==2)
   printf(" %d",i+1);
   if(i==3)
   printf(" %d",i+2) ;
   if(i==4)
   printf(" %d",i+3);


 }

 printf("\n");
 }
 getch();
 }
