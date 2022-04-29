#include<stdio.h>
#include<conio.h>
void main()
{
int i,a,b=0;
printf("enter the number less than 500 \n");
scanf("\n %d",&i);
a=i;
if(a<0 ||a>500)
{
printf("it is an out of range\n");
}
else
{
b=b+a%10;
a=a/10;
b=b+a%10;
a=a/10;
b=b+a%10;

}
printf("sum ofall digit %d =%d\n",i,b);
getch();
}