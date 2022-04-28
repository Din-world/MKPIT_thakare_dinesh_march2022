#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name1[50]={"dinesh"};
char name2[50]={"abhi"};

strcpy(name1,name2);
printf("%s",name1);
getch();
}
