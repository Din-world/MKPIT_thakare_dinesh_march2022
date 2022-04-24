#include<stdio.h>
#include<conio.h>
void main()
{
float i,s=0;
for(i=1;i<=50;i++)
{
printf("%f=\n",i);
s=s+1/i;
}
printf("value of s=%f ",s);

 getch();
}