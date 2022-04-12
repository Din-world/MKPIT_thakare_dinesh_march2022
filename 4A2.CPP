#include<stdio.h>
#include<conio.h>
void main()
{
int password,a;
clrscr();
//password=1234;
printf("enter the password\n");
while(a!=0)
{
scanf("%d",&a);

if(a==1234)
{
printf("correct password");
break;
}
else
{
printf("incorrect password");
}
a++ ;
}
getch();
}
