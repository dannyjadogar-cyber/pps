#include<stdio.h>
#include<conio.h>
void main()
{
int n,prime,i,f=0;
clrscr();
printf("Enter The value ofn=");
scanf("%d",&n);
for (i=2;i<=n/2;i++)
{
if (n%i==0)
{f=1;
break;}
}
if (f==1)
printf("Number is not a prime");
else
printf("Number is Prime");
getch();
}