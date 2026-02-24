#include<stdio.h>
#include<conio.h>
void main()
{
int sum=0,r,n,p;
clrscr();
printf("Enter the number= ");
scanf("%d",&n);
p=n;
while (n>0)
{
m=n%10;
sum=sum+m;
n=n/10;
}
printf("sum number= %d",sum);
getch();
}
