#include<stdio.h>
#include<conio.h>
void main()
{
int n,fact = 1,i;
clrscr();
printf("Enter The value ofn=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact = fact * i;
}
printf("Fact=%d",fact);
getch();
}