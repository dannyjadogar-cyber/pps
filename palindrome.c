#include<stdio.h>
#include<conio.h>
void main()
{
int s=0,r,n,p;
clrscr();
printf("Enter the number= ");
scanf("%d",&n);
p=n;
while (n>0)
{
r=n%10;
s=s*10+r;
n=n/10;
}
if (p==s)
printf("\nThis no is palundrone");
else
printf("\nThis no is not palundrone");
getch();
}
