#include<stdio.h>
#include<conio.h>

void main()
{
int i,n;
int a[100];
printf("enter the number of element \n");
scanf("%d",&n);
printf("enter the array\n");
for(i=0;i<n;i++)
{
  printf("a[%d]=\n",i);
  scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
   if(a[i]<=a[i+1])
   {
   printf("number is equal and greater than previous\n");

   }
  else
  {
  printf("number is not equal and greater than previous\n");

  }
}
    getch();

}