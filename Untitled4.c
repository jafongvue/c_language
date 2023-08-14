#include<stdio.h>
double power(double, int);
void main() 
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
