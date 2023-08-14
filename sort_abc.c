#include <stdio.h>
#include <stdlib.h>
int array[100];
int input(int n,int c)
{
	for (c = 0; c < n; c++)
	{
    	scanf("%d", &array[c]);
	}
	sort(n,c);
}
int sort(int n,int c,int d,int t)
{
	for (c = 1 ; c <= n - 1; c++) {
    d = c;
 
    while ( d > 0 && array[d] < array[d-1])
	{
      t          = array[d];
      array[d]   = array[d-1];
      array[d-1] = t;
 
      d--;
    }
  }
  	ouput(n,c);
}
int ouput(int n,int c)
{
	printf("Sorted list in ascending order:\n");
 
  for (c = 0; c <= n - 1; c++)
  {
    printf("%d\n", array[c]);
  }
 
}
int main()
{
	int n,c;
	printf("Enter number of elements:");
	scanf("%d", &n);
	printf("Enter %d integers:",n);
	input(n,c);
}
