#include<stdio.h>
#include<conio.h>
 void main()
 {
 int a[2],b[2];
 int i,a1=0,b1=0;
 printf("enter the value of first array\n");
 for(i=0;i<3;i++)
 {
 printf("a[%d]=\n",i);
scanf("%d",&a[i]);
 }
 printf("enter the second array\n");
 for(i=0;i<3;i++)
 {
 printf("b[%d]=\n",i);
 scanf("%d",&b[i]);
 }
 // printf("%d %d %d %d %d %d\n",a[0],a[1],a[2],b[0],b[1],b[2]);
  for(i=0;i<3;i++)
  {
  a1=a1+a[i];
	}
  for(i=0;i<3;i++)
  {
  b1=b1+b[i];
  }

 if(a1>b1)
 for(i=0;i<3;i++)
 {
 printf("a[%d]=%d\n",i,a[i]);
 }
 else
 for(i=0;i<3;i++)
 {
 printf("b[%d]=%d\n",i,b[i]);
 }

 getch();

}