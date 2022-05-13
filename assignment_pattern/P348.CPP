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
 for(j=1;j<=i*2-1;j++)
 {
 printf("%d",j);
 }
 printf("\n");
 }
 getch();
 }
