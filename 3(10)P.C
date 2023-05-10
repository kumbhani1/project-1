#include<stdio.h>
#include<conio.h>

main()

{
  int a,b,c;
    clrscr();
    printf("enter value A=");
    scanf("%d",&a);
    printf("enter value B=");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("value a=%d\n",a);
    printf("value b=%d",b);
    getch();

}