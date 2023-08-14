#include<stdio.h>
int plus();
int Minus();
int MultiplyI();
int Devide();

plus(int num1,int num2)
{
    printf("%d+%d = %d",num1,num2,num1+num2);
    printf("\nthank you");
}
Minus(int num1,int num2)
{
    printf("%d-%d = %d",num1,num2,num1-num2);
    printf("\nthank you");
}
Multiply(int a,int b)
{
    printf("%d*%d = %d",a,b,a*b);
    printf("\nthank you");
}
Devide(int x,int y)
{
    printf("%d/%d = %d",x,y,x/y);
    printf("\nthank you");
}
main()
{
	int num1,num2,num;
	
	printf("\t* Menu:\n\n");
	printf("\t1.Plus\n\t2.Minus\n\t3.multiply\n\t4.devide\n\t5.exist:\n\n");
	printf("Choose the number above: ");
	scanf("%d",&num);
	switch(num)
	{
	case(1):printf("Enter the number1 you wanna calculate: ");scanf("%d",&num1);
	        printf("Enter the number2 you wanna calculate: ");scanf("%d",&num2);
	        system("cls");
            plus(num1,num2);
		break;
	case(2):printf("Enter the number1 you wanna calculate: ");scanf("%d",&num1);
	        printf("Enter the number2 you wanna calculate: ");scanf("%d",&num2);
            system("cls");
            Minus(num1,num2);
		break;
	case(3):printf("Enter the number1 you wanna calculate: ");scanf("%d",&num1);
	        printf("Enter the number2 you wanna calculate: ");scanf("%d",&num2);
	        system("cls");
            Multiply(num1,num2);
		break;
	case(4):printf("Enter the number1 you wanna calculate: ");scanf("%d",&num1);
	        printf("Enter the number2 you wanna calculate: ");scanf("%d",&num2);
	        system("cls");
            Devide(num1,num2);
		break;
	case(5):system("cls");
		printf("Now you're out of the calculattion.\n");
		printf("Thank you.");
		break;
		
		default:system("cls");                                                                                                                                 
		printf("The Number isn't in the Determination.\n"); 
		printf("Please try the right one.\n");
		printf("Thank you.");
	}
	return 0;

}
