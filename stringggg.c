//String data program
/*#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
	char st[8];
	//clrscr();
	strcpy(st, "Turbo C");
	printf("%s\n", st);
}
#include <stdio.h>
void main() {
int x, y;
x = 5;
y = ++x;
printf("y = %d \n", y);
printf("x = %d \n", x);
}
#include <stdio.h>
void main() {
int x, y;
x = 5;
y = x++;
printf("x = %d \n", x);
printf("y = %d \n", y);
}*/
#include <stdio.h>
#include <conio.h>
void main() {
//clrscr();
int h1, h2, m1, m2, temp, sumh, summ;
printf("Input the first time(hh:mm): ");
scanf("%d%*c%d", &h1, &m1);
printf("Input the second time(hh:mm): ");
scanf("%d%*c%d", &h2, &m2);
temp = (m1+m2)/60; summ = (m1+m2)%60;
sumh = h1+h2+temp;
printf("Total is %d:%d \n", sumh, summ);
}
