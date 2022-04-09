#include<stdio.h>
#include<conio.h>
void main()
{
int p,q,s,r,sum;
printf("enter the value of p :");
scanf("%d",&p);
printf("\n enter the value of q :");
scanf("%d",&q);
printf("\n enter the value of r :");
scanf("%d",&r);
printf("\n enter the valof of s :");
scanf("%d",&s);
if((r>0 && s>0)&&(p%2==0)&&(q>r &&s>p) &&(r+s>p+q))
{
printf("correct value");
  }
else
{
printf("wrong value");
}

getch();
}