#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    clrscr();
    printf("Enter the value of A and B= ");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("Value of A=%d \nValue of B= %d",a,b);
getch();
}