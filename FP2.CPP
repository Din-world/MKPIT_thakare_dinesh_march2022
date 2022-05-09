#include<stdio.h>
#include<conio.h>
void fun(int i);
void main()
{
int a;

  printf("power of number between 1 to 10\n");
fun(a);
}
void fun(int i)
{
int p=1;
 for(i=1;i<=10;i++)
 {
    p= i*i;
    printf("%d= %d\n",i,p);
    }
    getch();

}