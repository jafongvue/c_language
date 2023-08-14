/*#include <stdio.h>
#include <conio.h>
void main()
{
	System cls();
	printf("%s\n","12345678901234567890");
	printf("%s","Turbo C"); 
	printf("%s \n","by Borland International, Inc.");
	printf("\n");
	printf("%20s \n","Microcomputer");
	printf("%25s \n","Microcomputer");
	printf("\007");
}*/


/*#include <stdio.h>
#include <conio.h>
void main() 
{
	clrscr();
	int a;
	fprintf(stdprn, "Microcomputer\n");
	a = 20; 
	fprintf(stdprn, "a = %d\n", a);
}*/



/*#include <stdio.h>
void main()
{
	int count;
	count = 1;
	while(count <= 10) 
	{
		printf("Loop no. %d \n",count++*10);
		count++;
	}
}*/
/*#include <stdio.h>
void main() 
{
	int count;
	count = 1;
	while(count <= 10) 
	{
		printf("Loop no. %d \n", count);
		count++;
	}
}
*/



/*#include<stdio.h>
#include<conio.h>
void main() 
{
	//clrscr();
	float x,sum=0;
	int i;
	for(i=0;i<4;i++)
	{
		printf("Enter X%d:", i+1);
		scanf("%f", &x);
		sum = sum+x;
	}
	printf("Summation is %6.2f \n", sum);
}
*/



/*#include <stdio.h>
void main()
{
	int A, B, C;
	printf("Input three number: "); 
	scanf("%d%d%d", &A, &B, &C);
	if (A>B) 
		if (A>C) printf("%d is biggest\n", A);
		else printf("%d is biggest\n", C);
	else 
		if (B>C) printf("%d is biggest\n", B);
		else printf("%d is biggest\n", C); 
}*/



/*#include <stdio.h>
#include <conio.h>
void main() {
int Sc, choice;
printf("\n");
printf("Menu Selection\n");
printf("1. Score is 90-100\n");
printf("2. Score is 70-89\n");
printf("3. Score is 60-69\n");
printf("4. Score is 50-59\n");
printf("5. Score less than 50\n");
printf("\n");
printf("\n");
printf("Select your choice: "); 
scanf("%d", &choice);
printf("Input score: "); 
scanf("%d", &Sc);
switch(choice) 
	{
		case 1: printf("Score = %d Grade is A\n", Sc); break;
		case 2: printf("Score = %d Grade is B\n", Sc); break;
		case 3: printf("Score = %d Grade is C\n", Sc); break; 
		case 4: printf("Score = %d Grade is D\n", Sc); break;
		case 5: printf("Score = %d Grade is F\n", Sc); break;
	}

}*/


/*#include <stdio.h>
void main()
{
	int i, sum1, sum2;
	sum1 = 0; sum2 = 0; i = 1;
	while (i <= 10) 
	{
		sum1 = sum1+i;
		sum2 = sum2+i*i;
		i = i+1;
	}	
	printf("\tSumation of 1 to 10 = %d\n\n", sum1);
	printf("\tSumation square of 1 to 10 = %d\n", sum2);
}*/


/*#include <stdio.h>
void main() 
{
	int i, sum1, sum2;
	sum1 = 0; sum2 = 0; i = 1;
	do 
	{
		sum1 = sum1+i;
		sum2 = sum2+i*i;
		i = i+1;
	} 
	while (i <= 100);
	printf("\tSumation of 1 to 10 = %d\n\n", sum1);
	printf("\tSumation square of 1 to 10 = %d\n", sum2);
}*/



/*#include <stdio.h>
void main() 
{
	int i, sum1, sum2;
	sum1 = 0; sum2 = 0; 
	for (i=1; i<=10; i++) 
	{
		sum1 = sum1+i;	
		sum2 = sum2+i*i;
	} 
	printf("\tSumation of 1 to 10 = %d\n\n", sum1);
	printf("\tSumation square of 1 to 10 = %d\n", sum2);
}*/



/*#include<stdio.h>
void main() 
{
	int Count = 1, N;
	float Sc; 
	char Grade;
	printf("\t\tInput number of students:"); scanf("%d", &N);
	printf("\t\tPlease enter the score:");
	while(Count <=N) 
	{
		scanf("%f", &Sc);
		if (Sc>=90) Grade = 'A';
		else if (Sc>=70) Grade = 'B';
		else if (Sc>=60) Grade = 'C'; 
		else if (Sc>=50) Grade = 'D'; 
		else Grade = 'F';
		printf("\n\t\tThe score %.2f is grade %c", Sc, Grade);
		Count = Count+1; //Count++;
	}
}*/


/*#include<stdio.h>
void main() 
{	
	int Count = 1, N; float Sc; char Grade;
	printf("Input number of students:"); 
	scanf("%d", &N);
	printf("Please enter the score:\n");
	do 
	{
		scanf("%f", &Sc);
		if (Sc>=90) Grade = 'A';
		else if (Sc>=70) Grade = 'B';
		else if (Sc>=60) Grade = 'C'; 
		else if (Sc>=50) Grade = 'D'; 
		else Grade = 'F';
		printf("\t\t\t\t%f\t\t\t\t%c\n", Sc, Grade);
		Count = Count+1; //Count++;
	} while(Count <=N) ;
}*/


#include<stdio.h>
void main() 
{
	int Count, N; 
	float Sc; 
	char Grade;
	printf("\tInput number of students: "); 
	scanf("%d", &N);
	printf("\tPlease enter the score: ");
	for(Count=1; Count <=N; Count++) 
	{
		scanf("%f", &Sc);	
		if (Sc>=90) Grade = 'A';
		else if (Sc>=70) Grade = 'B';
		else if (Sc>=60) Grade = 'C'; 
		else if (Sc>=50) Grade = 'D'; 
		else Grade = 'F';
		printf("\n\tThe score %.2f is Grade %c",Sc,Grade);
	}
}

