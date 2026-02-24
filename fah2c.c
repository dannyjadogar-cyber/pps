#include<stdio.h>
#include<conio.h>
void main()
{int celsius,fahrenheit;
    clrscr();
    printf("Enter the value of Celigrade");
    scanf("%d",&celsius)
    fahrenhiet=(celsius*(9/5))+32;
    printf("Fahrenheit of %d celsius is %d\n",celsius,fahrenhiet);
    printf("Enter the value of Fahrenheit= ");
    scanf("%d",fahrenheit);
    printf("celsius of %d Fahrenheit is %d",fahrenheit,celsius);
    getch();
}