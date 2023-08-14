#include<stdio.h>
main()
{
	int x;
	printf("enter x: ");
	scanf("%d",&x);
	if(x>101)
	{
		printf(" No Grad");
	
			if(x>=80 && x<=100)
				printf("Grad A");
			else if(x>=70 && x<=79)
				printf("Grad B");
			else if(x>=60 && x<=69)
				printf("Grad C");
			else if(x>=50 && x<=59)
				printf("Grad D");
			else if(x>=0 && x<50)
				printf("Grad F");
	}
	else
	{
		printf("Please enter character!!!!");
	}
	getch();
	return 0;
}
