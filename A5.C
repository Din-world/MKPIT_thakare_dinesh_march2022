#include<stdio.h>
#include<conio.h>
void main()
{
int l,w,p,a;
printf("lenth of rectangle\n");
scanf("%d",&l);
printf("width of rectangle\n");
scanf("%d",&w);

p=2*l+2*w;
printf("\n perimeter of rectangle is %d",p);
a=l*w;
printf("\n area of the rectangle is %d",a);

getch() ;
}