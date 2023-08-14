#include <stdio.h>
int main()
{
	int N,i,A=1;
	printf("enter number=>");
	scanf("%d",&N);
	for(i=2;i<10;i++)
	if(A!=0)
		{
		if(i!=9)
		{
			if(i!=N)
				{
					A=N%i;
					if(A==0)
						{
							printf("number is not mone");
						}		
				}
			else
				i=i+1;
		}
		else
				printf("number is mone");
		
	}
}


