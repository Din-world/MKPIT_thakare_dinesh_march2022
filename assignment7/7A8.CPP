#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("number	\tsquare  \tcube\n");
printf("===================================================\n");
for(n=1;n<=20;n++)
{
printf("%d\t%d\t%d\n",n,n*n,n*n*n);
}
getch();
}