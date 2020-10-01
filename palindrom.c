#include<stdio.h>
void main(){
	
	char a[20],b[20];
	printf("enter string to check");
	gets(a);
	strcpy(b,a);
	strrev(b);
	if(strcmp(a,b)==0)
		printf("string is pallindrom");
	else
		printf("not");
}