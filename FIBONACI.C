#include<stdio.h>
#include<conio.h>
void main()
{
int n1 = 0,n2 = 1,n3,i,length;
clrscr();
printf("Enter the length of series= ");
scanf("%d",&length);
printf("%d,%d",n1,n2);
for (i=2;i<=length;i++)
{
n3 = n1 + n2;
n1 = n2;
n2 = n3;
printf(",%d",n3);
}
getch();
}