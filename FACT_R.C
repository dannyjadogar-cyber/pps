#include<stdio.h>
#include<conio.h>
int fact(int n)
{
if(n<=1)
return 1;
return n * fact(n-1);
}
void main()
{
int n;
clrscr();
printf("Enter the number ");
scanf("%d",&n);
printf("Factorial of %d is %d\n",n,fact(n));
getch();
}