#include<stdio.h>
#include<conio.h>

void main()
{ int i,j;
clrscr();
 for(i=5;i>=1;i--)
 {
 for(j=1;j<=i;j++)
 {
   if(i>=j)
 printf("%d",i);
  else
  printf(" ");
 }
 printf("\n");
 }

    getch();

}