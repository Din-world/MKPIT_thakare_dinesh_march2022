#include<stdio.h>
#include<conio.h>
void main()
{
 int n,diff,t;
 printf("enter the number \n");
 scanf("%d",&n);
 if(n>51)
 {
 t=n*n*n;
 printf("triple of %d =%d",n,t);
 }
 else
 {
 diff=51-n;
 printf("diffrence between %d and 51=%d",n,diff);
 }
 getch();
 }