#include<stdio.h>
#include<conio.h>
void main()
{
int a,sum=0,i;
clrscr();
 for(i=1;i<=5;i++)
 {
 printf("enter the number");
 scanf("%d",&a);
 if(a%2!=0)
 {
   sum=sum+a;
 }

}
 printf("sum of odd number = %d",sum);

 getch();
  }