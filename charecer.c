#include<stdio.h>
main()
{
	char name[15],last_name[15];
	printf("\tplease enter your first name: ");
	scanf("%s",&name);
	printf("\tplease enter your last name:");
	scanf("%s",&last_name);
	printf("\n\tYour Name is Mr %s %s.",name,last_name);
}
