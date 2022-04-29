#include<stdio.h>
#include<conio.h>
 void swp(int x,int y);
void add();
void main()
{
add();
}
void add()
{
 int num1,num2,sw;
     printf("enter two number");
     scanf("%d%d",&num1,&num2);
     swp(num1,num2);
     }
     void swp(int x,int y)
    {     int s;
     s=y;
     y=x;
     y=s;


     printf("after swaping\n ");
     printf("num1=%d num2=%d",x,y);


     getch();
     }