#include<stdio.h>
#include<conio.h>
void main()
{
int i;
int a[5];
 printf("enter any six number");
for(i=0;i<=5;i++)
{
 printf("a[%d]= ",i);

scanf("%d",&a[i]);
}
int count=0;
for(i=0;i<=5;i++)
{
 if(a[i]==5 && (a[i+1]==5 ||a[i+1]==6))
{
count=count+1;
}
}
printf("%d",count);
getch();
}






















































