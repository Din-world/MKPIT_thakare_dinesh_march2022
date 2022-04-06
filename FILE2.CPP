#include<stdio.h>
#include<conio.H>
void main()
{
int num,n1,n2,n3,a,b,c,d,result;
printf("enter 3 digit numnber") ;
scanf("%d",num);
num=a;
n1=num%10;
num=num/10;
n2=num%10;
num=num/10;
n3=num%10;
 b=n1*n1*n1;
 c=n2*n2*n2;
 d=n3*n3*n3;
 result=b+c+d;
  if(a==result)
  {printf("your number is armstronh");
  }
  else
  {
  printf("your number is not armstrong");
  }
  getch();
  }