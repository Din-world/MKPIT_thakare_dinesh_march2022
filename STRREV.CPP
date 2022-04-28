#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name[50];
printf("enter any name ");
scanf("%s",name);
strrev(name);
printf("%s\n",name);
getch();
}
