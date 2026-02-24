# include<stdio.h>
# include<conio.h>
void main ()
{
    int H, M, E, S, G, total, per;
    clrscr();
    printf (" Enter the value of five subject marks ");
    scanf (" % d % d % d % d % d ", &H, &M, &E, &S, &G);
    total = H + M + E + S + G;
    per = (total / 500) * 100;
    if ( per >= 90)
        printf (" Grade A ");
    else if (per >= 80)
        printf (" Grade B ");
    else if (per >= 70)
        printf (" Grade C ");
    else if (per >= 60)
        printf (" Grade D ");
    else if (per >= 50)
        printf (" Grade E ");
    else printf (" Fail ");
    getch ();
}