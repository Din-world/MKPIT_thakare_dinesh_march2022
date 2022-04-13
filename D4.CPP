#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,rev=0,add=0,d;
printf("enter n digit number :\n");
scanf("%d",&a);
  d=a;
while(a>0)
{
b=a%10;
c=b*b*b;
add=add+c;
a=a/10;

}
if(d==add)
{
 printf("armstrong nnumber");
 }
 else
 {
 printf("it is not armstrong number");
 }
getch();
}