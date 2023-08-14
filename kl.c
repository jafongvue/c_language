#include <stdio.h>
void main() {
float temp[12], sum, avg_temp;
int i, j;
sum = 0;
for (i=1; i<=12; i++) 
{
	printf("temp(%d) =", i);
	scanf("%f", &temp[i-1]);
	sum = sum+temp[i-1];
}
avg_temp = sum/12;
for (j=1; j<=12; j++)
printf("month(%d) = %f", j, temp[j-1]);
printf("Average temperature = %f\n", avg_temp);
}
