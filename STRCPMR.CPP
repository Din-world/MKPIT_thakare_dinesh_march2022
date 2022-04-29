#include<stdio.h>
#include<conio.h>
void main()
{
int f=1,i,l=0,l1=0;
char n1[20]={"dinesh"};
char n2[20]={"abhishekh"};
for(i=0;n1[i]!='\0';i++)
{
l=l+1;
}
for(i=0;n2[i]!='\0';i++)
{
l1=l1+1;
}
if(l>l1)
{
l=l1;
}
else
{
l=l1;
}
 for(i=0;i<=l;i++)
 {
 if(n1[i]==n2[i])
 {
 f=0;
 }
 }
 if(f==1)
 {
 printf("string is equal");
 }
 else
 {
 printf("string is not equal");
 }
 getch();
 }
