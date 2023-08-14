#include<stdio.h>
#include<string.h>
void insert();
main(){
char s[70];
printf("enter a string :");
gets(s);
insert(strlen(s),s);
printf("tre string after sorted : %s\n ",s);
}
void insert(int count,char *item){
char temp;
int a,b;
for (a=1;a<count;++a){
temp=item[a];
b=a-1;
while(b>=0 && temp<item[b]){
item[b+1]=item[b];
b--;
}
item[b+1]=temp;
}
}

