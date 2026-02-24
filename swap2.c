#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    clrscr();
    printf("Enter the value of A and B= ");
    scanf("%d%d",&a,&b);
    a= a+b;
    b= a-b;
    a= a-b;
    printf("Value of A=%d \nValue of B= %d",a,b);
getch();
}