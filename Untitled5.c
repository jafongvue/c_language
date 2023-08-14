#include<stdio.h>
void add()
{
	int i,n,sum=0;
	printf("    input\n  1+2+3+...+");
	scanf("%d",&n);
	printf("    sum is \n");
	for(i=1;i<=n;i++)
		{
			printf("%d",i);
			sum=sum+i;
			if(i<n)
				{
					printf("+");
				}
		}
	printf(" = %d or SUM = %d",sum,sum);
}
void averang()
{
	int a,b,c;
	float avg;
	printf("averang of 3 number\n");
	printf("\tinput X1=");
	scanf("%d",&a);
	printf("\tinput X2=");
	scanf("%d",&b);
	printf("\tinput X3=");
	scanf("%d",&c);
	avg=a+b+c;
	printf("\tavg=%.3f\n",avg/3);
}
void main()
{
	char choice;
do  {	
		printf("\n_______________________________________________________________________________________________________________________");
		printf("\n\t1. sum _ (1+2+3+...+n=..?)\n");
		printf("\t2. averang _ (x1+x2+x3)/3)=..?\n");
		printf("\t3. Exit\n");
		printf("\n\tInput number =>");
		scanf("%d",&choice);
		system("cls");
		switch(choice)
		{
			case 1:
					add();
					break;
			case 2:
					averang();
					break;
			case 3:
					printf("\n\tPase Enter!");
					break;
		}
	}
while(choice!=3);
}
