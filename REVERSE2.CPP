#include<stdio.h>
#include<conio.h>
int a;
void fun();
void main()
{

clrscr();
printf("enter the number ");
scanf("%d",&a);

printf("reverse number =");
fun();

}
void fun()
{
int c=0,n;

if(a<=0)
return;
{
 n=a%10;
 c=c*10+n;
 a=a/10;


 }
printf("%d",c);
 fun();
getch();
}
