#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,sqr;
clrscr();
printf("enter the number\n");
scanf("%d",&a);
printf("square of all even number \n");
 for(i=1;i<=a;i++)
 {
 if(i%2==0)
 {
   sqr=i*i;

 printf("%d\n",sqr);
}
}
 getch();
  }