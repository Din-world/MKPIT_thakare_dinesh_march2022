#include<stdio.h>
#include<conio.h>
void main()
{
int a[3],b[3],i,j;
for(i=0;i<3;i++)                  // for new array 3+3=6=length
{
printf("a[%d]=\n",i);
scanf("%d",&a[i]);
}
for(j=0;j<3;j++)
{
printf("b[%d]=\n",j);
scanf("%d",&b[j]);
}
printf("new array \n");

int c[6]={a[0],a[1],a[2],b[0],b[1],b[2]};

for(i=0;i<6;i++)
{
printf("c[%d]=",i);
printf("%d\n",c[i]);
}
getch();
}