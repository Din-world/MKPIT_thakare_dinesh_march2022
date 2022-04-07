 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int num,n1,n2,n3,res,a;
printf("enter three digit number");
scanf("%d",&num);

num=a;

n1=num%10;
num=num/10;

n2=num%10;
num=num/10;

n3=num%10;

res=n1*100+n2*10+n3*1;

if(a==res)
{
printf("number is palindrome");
}
else
{
printf("number is not palinfrome");
}
getch();
}