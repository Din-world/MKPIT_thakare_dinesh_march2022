#include<stdio.h>
#include<conio.h>
void main()
{
int r,l,a;
int pi=3.14;
printf("radius of cone= \n");
scanf("%d",&r);
printf("slant lenghth of cone =\n");
scanf("%d",&l);
printf("area pf cone =\n");
a=(pi*r)*(r+l);
printf("%d",a);
getch();
}
