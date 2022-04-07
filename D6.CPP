#include<stdio.h>
#include<conio.h>
void main()
{
int p,a,r,d;
printf("radius of cirle");
scanf("%d",&r);            //pi=d
d=3.14;
p=2*d*r;
printf("\n perimeter of cirle is %d",p);
a=d*r^2;
printf("\n area of the circle is %d",a);
getch();
}