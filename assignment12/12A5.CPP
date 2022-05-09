#include<stdio.h>
#include<conio.h>
 void main()
 {

 int a[8],i,l;
 for(i=0;i<8;i++)             //new array strart from middle of the array
 {                               // new array start 8/2=4
 printf("a[%d]= ",i);
 scanf("%d",&a[i]);
 }
 for(i=4;i<=6;i++)
 {
  printf("a[%d]=%d\n",i,a[i]);
  }
  getch();
       }