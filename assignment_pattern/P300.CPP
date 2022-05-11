#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a=0;
clrscr();
for(i=1;i<=3;i++)
{
for(j=1;j<=3;j++)
{
if(i+j>=4)
  {
  a=a+1;
  printf("%d",a);
  }
  else
  {
  printf(" ");
  }

}
a=0;
printf("\n");
}
getch();
}