#include<stdio.h>
int fact(int n);
void main(){
	int n;
	printf("enter number");
	scanf("%d",&n);
	printf("factorial is %d ",fact(n));
	
}
int fact(int n){
	if(n<=1)
		return(01);
	else{
	n=n*fact(n-1);
	return(n);
	}
}