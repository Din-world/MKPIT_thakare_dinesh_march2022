#include<stdio.h>
#include<conio.h>
void main()
{
char r,c,add=0;
clrscr();
for(r=1;r<=4;r++)
{
for(c=1;c<=5;c++)
{
if(r%2!=0)
 {add=add+1;
 printf("%d ",add);
  }
  else
  {
  printf("a ");
  }
   }
   add=0;
   printf("\n");
   }
  getch();
  }
