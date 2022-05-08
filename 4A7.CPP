#include<stdio.h>
#include<conio.h>

void main()
{
int a,i,j=1,b=0;
printf("enter the number of line");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
while(b<3)
{
printf("%d ",j++);
b++;
}
b=0;
printf("\n");
}
    getch();
 }
