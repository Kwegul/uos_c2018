#include <stdio.h>
int main(void) 
{

	char name[15];
	char major[15];

	int stud_nm;
	int birth;

	printf("Put your name : ");
	scanf_s("%s", name, sizeof(name));

	printf("Put your birthday : ");
	scanf_s("%d", &birth);

	printf("Put your study number : ");
	scanf_s("%d", &stud_nm);

	printf("Put your major : ");
	scanf_s("%s", major, sizeof(major));

	printf("Name : %s \n", name);
	printf("Birthday : %d \n", birth);
	printf("Study number : %d \n", stud_nm);
	printf("Major : %s \n", major);

}