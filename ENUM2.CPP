#include<stdio.h>
#include<conio.h>

enum wday {sun,mon,tue,wed,thus,fri,sat};
void main()
{
enum wday days;
days=sun+1;
printf("%d",days);
getch();
}


