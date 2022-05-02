#include<stdio.h>
#include<conio.h>
void main()
{
int j,i,n,r;
clrscr();
printf("enter the prime number between 1 to 200\n");
for(n=1;n<=200;n++)
{
for(i=1;i<=n;i++)
{
r=0;
for(j=1;j<=i;j++)
{
if(i%j==0)
{
 r++;
}
}
}

if(r==2)
{
printf(" %d",n);
}
}


getch();
}