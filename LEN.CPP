#include<stdio.h>
#include<conio.h>
void main()
{
int i,count=0;
clrscr();
char ch[50]={"dineshthakare"};
for(i=0;ch[i]!='\0';i++)
{
count=count+1;
}
printf("lenght= %d",count);
getch();
}