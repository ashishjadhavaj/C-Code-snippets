#include<stdio.h>
void main(){
	int n,l,sum,prod;
	printf("enter no");
	scanf("%d",&n);
	while(n>0)
	{
		l=n%10;
		sum=sum+l;
		prod=prod*l;
		n=n/10;
	}
	if(sum==prod)
	{
		printf("no is spy");
	}
	else
		printf("not");
	
}