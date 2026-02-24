#include<stdio.h>
#include<conio.h>
int main()
{
int a[10],i,min,max;
clrscr();
for (i=0;i<=9;i++)
{
printf("Enter the value array[%d]=",i);
scanf("%d",&a[i]);
}
min=max=a[0];
for (i=1;i<=9;i++)
{
if (min>=a[i])
min=a[i];
if (max<=a[i])
max=a[i];
}
printf("The max value is %d.\nThe min value is %d.",max,min);
getch();
}