#include<stdio.h>
#include<conio.h>

struct employee
{
    int empid;
    char name[50];
    char address[100];
    char phone_no[15];
};

int main()
{
    struct employee emp[5];
    int i, n;

    clrscr();

    printf("Enter number of employees (max5): ");
    scanf("%d", &n);

    if (n > 5)
	n = 5;

    for (i = 0; i < n; i++)
    {
	printf("\nEnter details of employee %d\n", i + 1);

	printf("Employee ID: ");
	scanf("%d", &emp[i].empid);

	printf("Name: ");
	scanf("%s", emp[i].name);

	printf("Address: ");
	scanf(" %s", emp[i].address);

	printf("Phone Number (+91): ");
	scanf("%s", emp[i].phone_no);
    }

    printf("\n--- Employee Details ---\n");

    for (i = 0; i < n; i++)
    {
	printf("\nEmployee %d\n", i + 1);
	printf("Emp ID   : %d\n", emp[i].empid);
	printf("Name     : %s\n", emp[i].name);
	printf("Address  : %s\n", emp[i].address);
	printf("Phone No : +91-%s\n", emp[i].phone_no);
    }

    getch();
}
