#include<stdio.h>
#include<conio.h>
void main()
{
int i;
int a[5];

printf("enter six number \n");
for(i=0;i<=5;i++)
{
printf("a[%d]= ",i);
scanf("%d",&a[i]);
}
for(i=0;i<=5;i++)
{
if(a[i]==1 && a[i+1]==2 && a[i+2]==3 )
{
printf("sequence 1,2,3 are present\n");
}
}
getch();
}
























































