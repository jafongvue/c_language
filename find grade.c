5#include<stdio.h>
main()
{
	int score;
	printf("enter score:");
	scanf("%d",&score);
	if(score>=90&&score<=100)
    printf("Grade A");
    else if(score>=80&&score<90)
    printf("Grade B+");
    else if(score>=70&&score<80)
    printf("Grade B");
    else if(score>=65&&score<70)
    printf("Grade C+");
    else if(score>=60&score<65)
    printf("Grade C");
    else if(score>=55&&score<60)
    printf("Grade D+");
    else if(score>=50&&score<55)
    printf("Grade D");
    else if(score<50&&score>=0)
    printf("Grade F");
    else printf("Don't have score");
}
       
