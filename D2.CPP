#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,add=0;
clrscr();
printf("enter n digit number :\n");
scanf("%d",&a);
b=0;
add=0;
printf("addition of all numbers of %d \n",a);
while(a>0)
{
c=a%10;
add=add+c;
a=a/10;

}
printf("%d\n",add);
getch();
}