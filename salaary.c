#include<stdio.h>
void main()
{
	int hour,money,result,m;
	printf("entr hour and money:");
	scanf("%d %d",&hour,&money);	
	hour=hour*20000;
	m=hour+money;
	if(m>=1500000 && m<=3000000)
		result=m*5/100;
		else if(m>=3000000 && m<=4000000)
			result=m*7/100;
			else if(m>=5000000)
			result=m*9/100;
	else result=m*12/100;
	printf("salary = %d kip",result);
	
}
