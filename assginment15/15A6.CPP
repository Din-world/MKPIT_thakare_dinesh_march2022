#include<stdio.h>
#include<conio.h>
 void main()
 {
 int i,j,n;
 printf("enter the number  ");
 scanf("%d",&n);
 for(i=0;i<5;i++)
 {
 for(j=0;j<3;j++)
 {
   if(i==0 || i==4)
   {
    printf("%d",n);
    }
  if(i==1 || i==2|| i==3)
  {
  printf("%d",n);
  }
  }
    printf("\n");
   }
   getch();
   }