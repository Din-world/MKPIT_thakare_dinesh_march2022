#include<stdio.h>
#include<conio.h>
void main()
{
int i;
char ch1[50];
char ch2[5];
printf("enter any name :");
scanf("%s",ch1);
for(i=0;ch1[i]!='\0';i++)
{
ch2[i]=ch1[i];
}
printf("%s\n",ch2);
getch();
}