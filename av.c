#include<stdio.h>
main()
{
	float x1,x2,x3;
	float avg=0;
	
	printf("Enter x1 : ");
	scanf("%f",&x1);
	printf("Enter x2 : ");
	scanf("%f",&x2);
	printf("Enter x3 : ");
	scanf("%f",&x3);
	avg=(x1+x2+x3)/3;
	printf("\nAverage = %.2f",avg);
	
	
}
