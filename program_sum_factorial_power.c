#include<stdio.h>
unsigned int s(unsigned int);
unsigned int factorial(unsigned int);
unsigned int fibonacci(unsigned int);
double power(double, int);
void sum()
{
	unsigned int number, sum;
	printf("\tInput number for sum: "); 
	scanf("%u", &number);
	sum = s(number);
	printf("\tSum of 1 to %u is %u\n\n", number, sum);
}
unsigned int s(unsigned int n) 
{
	if (n<=1) return (n);
	else return (n+s(n-1));
}

void fact()
{
	unsigned int number, f;
	printf("\tInput number: "); 
	scanf("%u", &number);
	f = factorial(number);
	printf("\tFactorial of: %u! = %u\n\n", number, f);
}
unsigned int factorial(unsigned int n)
{
	if (n<=1) return (n);
	else return (n*factorial(n-1));
}
void pw()
{
	double number, PN; int exp;
	printf("\tInput base of power number: "); 
	scanf("%lf", &number);
	printf("\tInput exponent number: "); 
	scanf("%d", &exp);
	PN = power(number, exp);
	printf("\t%3.f power of %d is %3.f\n\n", number, exp, PN);
}
double power(double a, int p) 
{
	if (p==0) return 1.0;
	else if(p>0) return (a*power(a, p-1));
	else return ((1/a)*power(a, p+1));
}
void fib()
{
    int i,t1=0,t2=1,n,next;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("fibonacci seriesr: ");
    for(i=0;i<n;i++) 
     {
        printf("%d  ",t1);
        next=t1+t2;
        t1=t2;
        t2=next;
     }
}
void main()
{
	char choice;
do  {	
		printf("\n");
		printf("\t\t=================================================\n");
	 	printf("\t\t+              Please choice Menu below :       +\n");
	 	printf("\t\t+               1. sum                          +\n");
	 	printf("\t\t+               2. factorial                    +\n");
	 	printf("\t\t+               3. power                        +\n");
	 	printf("\t\t+               4. fibonacci                    +\n");
	 	printf("\t\t+               0. close promgram               +\n");
	 	printf("\t\t+                                               +\n");
	 	printf("\t\t=================================================");
		printf("\n\n\t\t\tWould do you want to choice =>");
		scanf("%d",&choice);
		system("cls");
		printf("\tYou choice number %d\n",choice);
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
			case 4:
					fib();
					break;
					
			case 0:
					printf("\n\tPlease press botton enter to close program");
					break;
		}
	}
while(choice!=0);
}
