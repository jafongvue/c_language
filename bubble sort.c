#include <stdio.h>
#include<string.h>
void bubble();
void out();
void out()
{
	printf("the string after sorted : %s\n",s);	
}
main()
{
	char s[70];
	printf("enter a string :");
	gets(s);
	bubble(strlen(s),s);
	//printf("the string after sorted : %s\n",s);
}
void bubble(int num,char *str)
{
	char temp;
	int a,b;
	for (a=1;a<num;++a)
	for(b=num-1;b>=a;--b)
	{
		if (str[b-1]>str[b])
		{
			temp=str[b-1];					
			str[b-1]=str[b];
	 		str[b]=temp;
 		} 
 	} 
}

