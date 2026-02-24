#include<stdio.h>
#include<conio.h>
void main()
{
int s=0,r,n,p;
clrscr();
printf("Enter the number= ");
scanf("%d",&n);
while (n>0)
{
r=n%10;
s=s*10+r;
n=n/10;
}
printf("Reverse number= %d",s);
getch();
}
