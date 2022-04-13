#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,add=0;
clrscr();
printf("enter n digit number :\n");
scanf("%d",&a);
c=a;
while(a!=0)
{
b=a%10;
add=add*10+b;
a=a/10;
}
printf("%d\n",add);
if(add==c)
{
 printf("\nis palindrome number");
     }
 else
{
printf("\n  is not palindrome number");
 }
getch();
}