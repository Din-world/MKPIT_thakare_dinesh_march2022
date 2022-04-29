#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,len;
char ch1[50],ch2[50];
printf("enter string name :\n");
scanf("%s",ch1);
for(i=0;ch1[i]!='\0';i++)
{
ch2[i]=ch1[i];
}

printf("after copying string = %s \n",ch2);
len=strlen(ch1);
  printf("number of character = %d",len);
  getch();
  }