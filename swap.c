#include<stdio.h>
#include<conio.h>
void swap(a,b,c)
{
	c=a;
	a=b;
	b=c;
	printf("a=%d\n",a);
	printf("b=%d",b);
	
}
main()
{
	int a,b,c;
	printf("enter a=");
	scanf("%d",&a);
	printf("enter b=");
	scanf("%d",&b);
	swap(a,b,c);
}

