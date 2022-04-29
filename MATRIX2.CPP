#include<stdio.h>
#include<conio.h>
void main()
{
int m1[2][2],i,j;
printf("enter 2 x 2 matrix =");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d", &m1[i][j]);
}
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("m1[%d][%d]=%d\n",i,j,m1[i][j]);
}
}
getch();
}