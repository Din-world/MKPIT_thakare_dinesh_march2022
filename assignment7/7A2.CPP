#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("\n");
for(ch=65;ch<=122;ch++)
{
if(ch>90 && ch<97)
break;

printf("[%d-%c] ",ch,ch);
}
getch();
}