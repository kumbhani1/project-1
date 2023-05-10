#include<stdio.h>
#include<conio.h>

main()

{

    int base_salary,hra,da,ta,salary;
    clrscr();
    printf("enter base salary=");
    scanf("%d",&base_salary);
    printf("enter hra=");
    scanf("%d",& hra);
    printf("enter da=");
    scanf ("%d",& da);
    printf("enter ta=");
    scanf("%d",&ta);
    salary=hra+da+ta+base_salary;
    printf("salary=%d", salary);
    getch();

}