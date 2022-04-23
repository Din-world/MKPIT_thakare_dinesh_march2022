#include<stdio.h>
#include<conio.h>
void main()
{
int r,c,a;
clrscr();
for(r=1;r<=4;r++)
{
for(c=1;c<=r;c++)
{
printf("*");
}
printf("\n");
}
for(r=3;r>=1;r--)
{
for(a=1;a<=r;a++)
{
printf("*");
}
printf("\n");
}
getch();
}