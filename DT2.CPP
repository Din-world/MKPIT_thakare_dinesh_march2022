 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int choice,a,b,c;

 printf ("press 1 for addition");

 printf("press 2 for subtraction");

 printf("press 3 for multiplication");

 printf("press 4 for division");

 scanf("%d",&choice);

 switch(choice)
 {
 case 1:
 printf("addition of two number");
 scanf("%d%d",&a,&b);
 c=a+b;
 printf("addiion=%d",c);
 break;

 case 2:
 printf("subtraction of two number");
 scanf("%d%d",&a,&b);
 c=a-b;
 printf("subtraction=%d",c);
 break;

 case 3:
 printf("muliplication of two number");
 scanf("%d%d",&a,&b);
 c=a*b ;
 printf("muliplication=%d",c);
 break;

 case 4:
 printf("division of two number");
 scanf("%d%d",&a,&b);
 c=a/b;
 printf("division =%d",c);
 break;
 default:
 printf("not allow");
 break;
 }
 getch();
 }
