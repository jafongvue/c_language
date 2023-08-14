#include<stdio.h>
//unsigned int fibonacci(unsigned int);
int main() 
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
    return 0;
}
