#include<stdio.h>
void main()
{
	int a[20],n,count=0,i,j,k;
	printf("enter size");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<i-1;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				
			}
		}
		for(k=i+1;k<n;k++)
		{
			if(a[i]==a[k])
			count++;
			
		}
		if(count==0)
			printf("%d",a[i]);
	}
}