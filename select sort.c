#include<stdio.h>
#include<string.h>
void select();
main()
{
	char s[70];
	printf("enter a string :");
	gets(s);
	select(strlen(s),s);
	printf("tre string after sorted : %s\n ",s);
}
void select(int count,char *item)
{
	char temp;
	int a,b,c;
	for (a=0;a<=count-1;++a)
	{
		c=a;
		temp=item[a];
		for (b=a+1;b<count;++b)
		{
			if (item[b]<temp)
			{	
				c=b;
				temp=item[b];
			}
		}
	item[c]=item[a];
	item[a]=temp;
	}
}
