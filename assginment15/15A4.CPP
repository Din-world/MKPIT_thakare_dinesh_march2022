#include<stdio.h>
#include<conio.h>

void main()
{
 int x,y,z,s,m;
 printf("enter the three numbers\n");
 scanf("%d %d %d",&x,&y,&z);
  s=(x+y)*z;
  m=x*y+y*z;
  printf("(x+y)*z=%d",s);
  printf("\n x*y+y*z=%d",m);


  getch();
  }