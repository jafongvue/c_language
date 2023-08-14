#include<stdio.h>
/*nt Add();

void main()
{
	Add();
}
int Add()
{
	int a=0,b=0;
	printf("enter a=");
	scanf("%d",&a);
	printf("enter b=");
	scanf("%d",&b);
	printf("%d\n",a+b);
}*/
void Add(int,int);

void main()
{
	int a=0,b=0;
	printf("enter a=");
	scanf("%d",&a);
	printf("enter b=");
	scanf("%d",&b);
	Add(a,b);
}
 void Add(int x,int y)
{
	printf("\na+b=%d",x+y);
}

