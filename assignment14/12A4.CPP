#include<stdio.h>
#include<conio.h>

void main()
{
 int a[5],i;
 for(i=0;i<5;i++)
 {
 printf("a[%d]= ",i);
 scanf("%d",&a[i]);
 }
  int s=a[0];
       a[0]=a[4];
       a[4]=s;

  printf("new array after swaping first and last element\n");
  for(i=0;i<5;i++)
  {
    printf("a[%d]=%d\n",i,a[i]);

   }
    getch();

}