#include<stdio.h>
unsigned int s(unsigned int);
unsigned int factorial(unsigned int);
double power(double, int);
void sum()
{
	unsigned int number, sum;
	printf("Input number: "); scanf("%u", &number);
	sum = s(number);
	printf("Sum of 1 to %u is %u", number, sum);
}
unsigned int s(unsigned int n) 
{
	if (n<=1) return (n);
	else return (n+s(n-1));
}

void fact()
{
	unsigned int number, f;
	printf("Input number: "); scanf("%u", &number);
	f = factorial(number);
	printf("Factorial of %u is %u\n", number, f);
}
unsigned int factorial(unsigned int n)
{
	if (n<=1) return (n);
	else return (n*factorial(n-1));
}
void pw()
{
	double number, PN; int exp;
	printf("Input base of power number: "); 
	scanf("%lf", &number);
	printf("Input exponent number: "); 
	scanf("%d", &exp);
	PN = power(number, exp);
	printf("%lf power of %d is %lf\n", number, exp, PN);
}
double power(double a, int p) 
{
	if (p==0) return 1.0;
	else if(p>0) return (a*power(a, p-1));
	else return ((1/a)*power(a, p+1));
}
void main()
{
	char choice;
do  {	
		printf("\n-------------------Please choice Menu below------------------------------");
		printf("\n\t0. close promgram\n");
		printf("\t1. sum\n");
		printf("\t2. factorial\n");
		printf("\t3. power\n");
		printf("\n\tWould do you want to choice =>");
		scanf("%d",&choice);
		system("cls");
		switch(choice)
		{
			case 1:
					sum();
					break;
			case 2:
					fact();
					break;
			case 3:
					pw();
					break;
			case 0:
					printf("\n\tPlease press botton enter to close program");
					break;
		}
	}
while(choice!=0);
}
