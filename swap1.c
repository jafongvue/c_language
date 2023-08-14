#include<stdio.h>
void input();
void swap();
void output();

void main()
{
    int a,b,temp;
    a=b=temp=0;
    input(a,b);
    
    
}
input(int a,int b)
{
    printf("Enter a: ");scanf("%d",&a);
    printf("Enter b: ");scanf("%d",&b);
    printf("The value a before swap is %d\nThe value b before swap is %d\n",a,b);
    swap(a,b);
}
swap(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    output(a,b);
}
output(int x,int Y)
{
  printf("The value a after swap is %d\nThe value b after swap is %d\n",x,Y);  
}
