	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	int a[2],i;
	printf("enter three number");

	for(i=0;i<=2;i++)
	{
	printf("a[%d]=",i);
	scanf("%d",&a[i]);
	}
	for(i=0;i<=2;i++)
	{
	printf("\n a[%d]=%d",i,a[i]);
	}
	 getch();
	 }