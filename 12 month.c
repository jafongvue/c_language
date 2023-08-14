#include <stdio.h>
void main()
{
	float temp[12], sum, avg_temp;
	int i, j;
	sum = 0;
	for (i=1; i<=12; i++) 
	{
		printf("temp(%d) = ", i);
		scanf("%f", &temp[i-1]);
		sum = sum+temp[i-1];
	}
	avg_temp = sum/12;
	for (j=1; j<=12; j++)
	
	printf("month(%d) = %.3f\n", j, temp[j-1]);
	printf("\nAverage temperature = %.3f", avg_temp);
	
}
