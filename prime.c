#include<stdio.h>
void main(){
	int i,n,c=0;
	printf("enter number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			c++;
		
	}
	if(c==2)
		printf("no is prime");
	else
		printf("no is not prime");
}