#include<stdio.h>
#include<conio.h>
void main()
{
int sum=0,s=0,m,n,p;
clrscr();
printf("Enter the number= ");
scanf("%d",&n);
p=n;
while (n>0)
{
r=n%10;
s=m*m*m;
sum=sum+s;
n=n/10;
}
if(sum==p)
printf("This is armstrong");
else
printf("This is not a armstrong");
getch();
}
