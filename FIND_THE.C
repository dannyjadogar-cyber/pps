#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,find,f=0;
clrscr();
for (i=1;i<=10;i++)
{
printf("Enter the value array[%d]=",i);
scanf("%d",&a[i]);
}
printf("Enter the value to be find= ");
scanf("%d",&find);
for (i=1;i<=10;i++)
{
if (a[i]==find)
{f=1;
break;}
}
if (f==1)
printf("Entered value found on %d",i);
else
printf("Entered value Not found");
getch();
}