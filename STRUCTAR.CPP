#include<stdio.h>
#include<conio.h>

struct stud
{
int id;
char name[20];
};
int main()
{
int i;
struct stud s[4];
for(i=0;i<4;i++)
{
printf("enter student id\n");
scanf("%d",&s[i].id);
printf("enter the student name\n");
scanf("%s",&s[i].name);
}
for(i=0;i<4;i++)
{
printf("student id=%d\n",s[i].id);
printf("student name=%s",s[i].name);
 }
getch();
}