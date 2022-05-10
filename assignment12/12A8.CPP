#include<stdio.h>
#include<conio.h>

void main()
{
 int a[10], i,c=0;
 for(i=0;i<10;i++)
 {
    printf("a[%d]=\n",i);
    scanf("%d",&a[i]);
  }
  for(i=0;i<10;i++)
  {
  if(a[i]%2==0)
  {
   c=c+1;
  }

 }
 printf("even numbers in array=%d",c);

    getch();

}