#include<stdio.h>
#include<conio.h>

union stud
{
int id;
char name[20];
}s1;
void main()
{

printf("enter the student name\n");
scanf("%s",&s1.name);
printf("student name=%s\n",s1.name);

printf("enter student id\n");
scanf("%d",&s1.id);

printf("student id=%d\n",s1.id);


getch();
}