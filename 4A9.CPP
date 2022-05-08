#include<stdio.h>
#include<conio.h>
void main()
{
int p,q,i,j,b=1;
printf("enter the number of lines:");
scanf("%d",&p);
printf("enter the number ofsequence :");
scanf("%d",&q);
for(i=1;i<=p;i++)
{

for(j=1;j<=q;j++)
{
printf("%d ",b);
b++;
}
printf("\n");
}
getch();
}