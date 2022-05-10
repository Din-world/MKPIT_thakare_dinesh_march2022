#include<stdio.h>
#include<conio.h>

int main()
{     clrscr();
 int a[10], i,sum=0;
 for(i=0;i<10;i++)
 {
   printf("a[%d]=\n",i);
    scanf("%d",&a[i]);
  }
  for(i=0;i<10;i++)
  {
  if(a[i]==5)
  {
   if(a[i++]==6)
   continue;
   }
   else
    sum=sum+a[i];
printf("%d ",sum);
  if(a[i]=='\0')
  {
  return 0;
  }

 }
 printf("sum ofarray except 5 followed by 6 =%d",sum);

    getch();

}