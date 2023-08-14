#include<stdio.h>
unsigned int factorial(unsigned int);
void main()
{
	unsigned int number, f;
	printf("Input number: "); 
	scanf("%u",&number);
	f = factorial(number);
	printf("Factorial: %u! = %u\n", number, f);
}
unsigned int factorial(unsigned int n)
{
	if (n<=1) return (n);
	else return (n*factorial(n-1));
}
