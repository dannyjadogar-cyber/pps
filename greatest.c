# include <stdio.h>
# include <conio.h>
void main ()
{
    int a, b, c;
    clrscr();
    printf (" Enter the value of a, b, c = ");
    scanf ("%d %d %d ",&a,&b,&c);
    if ( a >= b && a >= c )
        printf (" a is greater. ");
    else if ( b >= a && b >= c )
        printf (" b is greatest. ");
    else
        printf (" c is greatest. ");
    getch ();
}