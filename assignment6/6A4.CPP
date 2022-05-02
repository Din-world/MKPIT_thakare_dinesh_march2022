#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,min,max,diff;
printf("enter the four number");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>=b && a>=c && a>=d)
{
max=a;
}
else
if(b>=a && b>=c && b>=d)
{
max=b;
}
else
if(c>=a && c>=b&& c>=d)
{
max=c;
}
else
{
max=d;
}
   if(a<=b&&a<=c&&a<=d)
{
min=a;
}
else
 if(b<=a&&b<=c&&b<=d)
{
 min=b;
}
else
if(c<=a&&c<=b&&c<=d)
{
min=c;
}
else
{
min=d;
}
diff=max-min;
printf("\n max and min =%d %d",max,min);
printf("diffrence between max and min =%d\n",diff);

getch();

}
