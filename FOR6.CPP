#include<stdio.h>
#include<conio.h>
void main()
{
int r,c,a=1;
clrscr();
for(r=1;r<=4;r++)
{
for(c=1;c<=r;c++)
{
printf("%d",a);
  a++;
  }
  printf("\n");
  }
  getch();
  }
