#include <stdio.h>
#include<conio.h>
#include <string.h>

void main() {
    char s1[20], s2[20], s3[20];
    int n1,n2;
    clrscr();

    printf("Enter the first string: ");
    gets(s1);

    printf("Enter the second string: ");
    gets(s2);

    n1 = strlen(s1);
    printf("Length of S1: %d\n", n1);

    n2 = strlen(s2);
    printf("Length of S2: %d\n", n2);

    strcpy(s3, s1);
    printf("Copied string (S3): ");
    puts(s3);

    strcat(s1, s2);
    printf("Concatenated string: ");
    puts(s1);

    strrev(s1);
    printf("Reversed string: ");
    puts(s1);

    getch();
}