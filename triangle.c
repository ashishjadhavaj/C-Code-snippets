#include<stdio.h>
void main()
{
	int n, i, j, k;
	printf("enter no");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n-i;j>=1;j--)
		{
			printf(" ");
		}
		for(k=1;k<=(i*2)-1;k++)
			printf("*");
		
		printf("\n");
		
		
	}
	
}