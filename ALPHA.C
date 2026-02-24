#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j;
char ch;
clrscr();
printf("Enter the value of row to be print= ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
ch='A';
	for(j=1;j<=i;j++)
	{
	printf("%c",ch++);
	}
printf("\n");
}
getch();
}
