#include<stdio.h>
main()
{
	int i,sum=0;
	for (i=1;i<=10;i++)
	{
		printf(" +%d",i);
		sum=sum+i;
	}
	printf("\nsum=%d",sum);
	getch();
	return 0;	
}
