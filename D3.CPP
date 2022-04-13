#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,rev=0;
printf("enter n digit number :\n");
scanf("%d",&a);
printf("reverse numbers of %d \n",a);
while(a>0)
{
b=a%10;
rev=rev*10+b;
a=a/10;

}
 printf("%d\n",rev);
getch();
}