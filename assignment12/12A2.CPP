#include<stdio.h>
#include<conio.h>

void main()
{
int a[8],b[2];
int i;
printf("length of array is even ");

 for(i=0;i<8;i++)
 {
 printf("a[%d]=\n",i);   //new array is middle of two integer of this array
 scanf("%d",&a[i]);      //   n/2  i<=n-1
 }
 printf("new array consist middle of two element");
		       // 8/2=4   i=4;i<=4;i++;
 for(i=3;i<=4;i++)
 {
 printf("b[%d]=%d\n",i,a[i]);
 }

    getch();

}