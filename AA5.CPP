#include<stdio.h>
#include<conio.h>
void main()                               //bank notes:100,50,20,,10,5,2,1
{
int amount,total;
printf("total amount :  ");
scanf("%d",&amount);

printf("\n total notes: ");

total=amount/100;
printf("\n total notes of 100 is %d",total);

amount=amount-total*100;
total=amount/50;
printf("\n total notes of 50 is %d",total);

amount=amount-total*50;
total=amount/20;
printf("\n total notes of 20 is %d",total);

amount=amount-total*20;
total=amount/10;
printf("\n total notes of 10 is %d",total);

amount=amount-total*10;
total=amount/5;
printf("\n total notes of 5 is %d",total);

amount=amount-total*5;
total=amount/2;
printf("\n total notes of 2 is %d",total);

amount=amount-total*2;
total=total/1;
printf("\n total notes of 1 is %d ",total);

getch();
}
