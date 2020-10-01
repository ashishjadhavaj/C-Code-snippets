#include<stdio.h>
void main(){
	int f=0,s=1,t,i,n;
	printf("enter number");
	scanf("%d",&n);
	printf("%d %d ",f,s);
	for(i=0;i<n;i++)
	{
		t=f+s;
		f=s;
		s=t;
		printf("%d ",t);
	}
}
