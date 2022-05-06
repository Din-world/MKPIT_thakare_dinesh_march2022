#include<stdio.h>
#include<conio.h>
int main()
{

int x,y;
printf("enter the twwo number");
scanf("\n %d%d",&x,&y);
if(x<y)
{
printf("y is greater");
}
else
{
printf("x is greater");
}

if(x%5==y%5)
{
if(x<y)
{
printf("\n x is smaller");
}
else
{
printf("\ny is smaller");
}
if(x==y)
{
return 0;
}
}
getch();

}






