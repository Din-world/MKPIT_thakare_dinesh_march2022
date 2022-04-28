#include<stdio.h>
#include<conio.h>

void main()
{
int i;
char name[50];
printf("enter any name ");
scanf("%s",name);
for(i=0;name[i]!='\0';i++)
{
printf("%c\n",name[i]);
}
getch();
}
