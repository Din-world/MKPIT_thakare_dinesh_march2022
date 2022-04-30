#include<stdio.h>
#include<conio.h>
void main()
{
int x,a,n1,n2,n3,n4,n5,rev=0;
clrscr();

printf("enter the 5 digit number x= \n");
scanf("%d",&x);
a=x;
n1=x%10;
rev=rev*10+n1;
x=x/10;
n2=x%10;
rev=rev*10+n2;
x=x/10;
n3=x%10;
rev=rev*10+n3;
x=x/10;
n4=x%10;
rev=rev*10+n4;
x=x/10;
n5=x%10;
rev=rev*10+n5;

printf("%d",rev);

if(a==rev)
{
    printf(" number is palindrome");
}
else
{
   printf(" number is not palindrome");
}

getch();
}