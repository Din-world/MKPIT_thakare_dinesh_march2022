#include<stdio.h>
#include<conio.h>

struct stud
{
int id;
char name[20];
};
int main()
{
struct stud s1={45,"dinesh"};

printf("student id=%d\n",s1.id);
printf("student name=%s",s1.name);

getch();
}