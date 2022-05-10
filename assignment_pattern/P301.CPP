#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
clrscr();
for(i=1;i<=3;i++)
{
for(j=3;j>=1;j--)
{
if(i>=j)
  {
  printf("%c",i+64);
  }
  else
  {
  printf(" ");
  }

}
printf("\n");
}
getch();
}