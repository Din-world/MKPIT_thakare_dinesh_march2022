#include<stdio.h>
#include<conio.h>
void fun();
void main()
{
  printf("power of number between 1 to 10\n");
fun();
}
void fun()
{
 int i,p=1;
 for(i=1;i<=10;i++)
 {
    p= i*i;
    printf("%d= %d\n",i,p);
    }
    getch();

}