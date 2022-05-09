#include<stdio.h>
#include<conio.h>
void main()
{
float add,sub,mul,div;
int  p,s;

printf("enter the number\n");
scanf("%d %d",&p,&s);

add=p+s;
printf("addition=%f \n",add);


div=p-s;
printf("substraction=%f \n",div);

mul=p*s;
printf("multiplication =%f \n",mul);

div=p/s;
printf("division=%f\n",div);

getch();
 }