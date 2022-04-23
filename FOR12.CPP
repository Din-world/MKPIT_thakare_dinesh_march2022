#include<stdio.h>
#include<conio.h>
void main()
{
int r,c;
clrscr();
for(r=1;r<=3;r++)
{
for(c=3;c>=1;c--)
{
if(c<=r)
{
printf("%d",c);
}else
{
printf(" ");
}

}
printf("\n");
}
getch();
}