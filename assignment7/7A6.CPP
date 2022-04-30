#include<stdio.h>
#include<conio.h>
void main()
{
int i,v;
char leter[100]= {"abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
printf("     integer equivalent of(a-z)(A-Z) \n");
printf("============================================================\n");
for(i=0;leter[i]!='\0';i++)
{
 v=leter[i] ;
 printf(" %d",v);
 }
 getch();
 }