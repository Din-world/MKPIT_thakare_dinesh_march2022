  #include<stdio.h>
  #include<conio.h>
  void main()
  {
  int a[4],i,add=0;
  clrscr();
  printf("enter five number");
  for(i=0;i<=4;i++)
  {
  printf("a[%d] =",i);
  scanf("%d",&a[i]);
 add=add+a[i];
 }
  printf("Addition of five array =%d",add);



  getch();
  }