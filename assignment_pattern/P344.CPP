#include<stdio.h>
#include<conio.h>

void main()
{
int i,sp,j,add=65;
for(i=1;i<=4;i++)
{
for(sp=1;sp<=40-i;sp++)
{
 printf(" ");
 }
 for(j=1;j<=i;j++)
 {
 printf(" %c",add);

 }
 add=add+2;
 printf("\n");
 }

 getch();
 }
