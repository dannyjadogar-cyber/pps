#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    FILE *fp;
    char data[20];
    clrscr();
    fp = fopen("abc.txt", "w");

    if (fp == NULL) {
	printf("Error: File cannot be opened for writing\n");
    } else {
	printf("File opened.\nEnter data to write: ");
	scanf("%s", data);

	fputs(data, fp);
	fputs("\n", fp);
	fclose(fp);
	printf("Data successfully written to file.\n\n");
    }

    fp = fopen("abc.txt", "r");

    if (fp == NULL) {
	printf("File cannot be opened for reading\n");
    } else {
	printf("Reading from file...\n");

	if (fgets(data, sizeof(data), fp) != NULL) {
            printf("Data found: %s", data);
        }
        
        fclose(fp);
    }
    
    printf("\nPress any key to exit...");
    getch();
}