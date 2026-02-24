#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter the values of A and B ");
scanf("%d%d",&a,&b);
swap(&a,&b);
printf("A= %d\nB= %d",a,b);
getch();
}
swap(int *a,int *b)
{
int c;
c=*a;
*a=*b;
*b=c;
return a,b;
}