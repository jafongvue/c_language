#include<stdio.h>
main()
{
    int num1,num2,Max,Min ;
    printf("\tInput number1: ");scanf("%d",&num1);
    printf("\tInput number2: ");scanf("%d",&num2);
    if(num1>num2)
    Max=num1;
    else
    Max=num2;
    printf("\n\tThe Maximum is %d\n",Max);
    if (num1>num2)
    Min=num2;
    else
    Min=num1;
    printf("\tThe Minimum is %d",Min);
    return 0;
}
