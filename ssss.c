#include<stdio.h>
unsigned int s(unsigned int);
void main() 
{
	unsigned int number, sum;
	printf("Input number: "); scanf("%u", &number);
	sum = s(number);
	printf("Sum of %u to 1 is %u", number, sum);
}
unsigned int s(unsigned int n) 
{
	if (n<=1) return (n);
	else return (n+s(n-1));
}
