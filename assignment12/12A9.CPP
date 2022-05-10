#include<stdio.h>
#include<conio.h>

int main()
{
 int a[10], i,sum=0;
 for(i=0;i<10;i++)
 {
    printf("a[%d]=\n",i);
    scanf("%d",&a[i]);
  }
  for(i=0;i<10;i++)
  {
  if(a[i]!=17)
  {
    sum=sum+a[i];
  }
  if(a[i]=='\0')
  {
  return 0;
  }

 }
 printf("sum ofarray except number 17=%d",sum);

    getch();

}