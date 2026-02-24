#include<stdio.h>
#include<conio.h>
void main()
{
    int a[2][2],b[2][2],c[2][2],i,j;
    clrscr();
    printf("Enter the Values of first Matrix: ");
    for (i=0;i<=1;i++)
    {
	for (j=0;j<=1;j++)
	{scanf("%d",&a[i][j]);}
    }
   printf("Enter the Values of second Matrix: ");
    for (i=0;i<=1;i++)
    {
	for (j=0;j<=1;j++)
	{scanf("%d",&b[i][j]);}
    }
    //addition matrix
     printf("Addition matrix:\n");
    for (i=0;i<=1;i++)
    {
	for(j=0;j<=1;j++)
	{c[i][j]=a[i][j]+b[i][j];}
    }

    for(i=0;i<=1;i++)
    {
	for(j=0;j<=1;j++)
	{printf("%d\t",c[i][j]);}
	printf("\n");
    }

    getch();
}