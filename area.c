# include <stdio.h>
# include <conio.h>
void main ()
{
    int l, b, s, r;
    float triangle, square, circle;
    clrscr ();
    printf (" Enter the value of length and base of Triangle = ");
    scanf ("%d%d",&l,&b);
    Triangle = 0.5*l*b;
    printf (" Enter the value of side of square = ");
    scanf ("%d",&s);
    square =s*s;
    printf ("Enter the value of radius of circle = ");
    scanf ("%d ",&r);
    circle = 3.14*r*r;
    printf ("Area of Triangle = %f \n square = %f \n circle = %f ", Triangle, square, circle);

    getch ();
}