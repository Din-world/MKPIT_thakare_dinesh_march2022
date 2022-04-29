#include<stdio.h>
#include<conio.h>
void main()
{
int i;
char ch1[50];
char ch2[5];
printf("enter name in upper case :");
scanf("%s",ch1);
for(i=0;ch1[i]!='\0';i++)
{
ch2[i]=ch1[i]+32;
}
printf("%s\n",ch2);
getch();
}