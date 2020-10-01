#include<stdio.h>
#define size 5
struct stk
{
	int s[size];
	int top;
	
}st;
int stkfull()
{
	if(st.top>=size-1)
		
		return 1;
	else 
		return 0;

}
int stkempty()
{
	if(st.top==-1)
		return 1;
	else 
		return 0;
	
}
void push(int ele)
{
	st.top++;
	st.s[st.top]=ele;
	
}
int pop()
{
		int ele;
		ele=st.s[st.top];
		st.top--;
		return ele;
		
}
void display()
{
	int i;
	if(stkempty())
		printf(" stack is empty");
	else
		for(i=0;i<=st.top;i++)
			printf("%d \n",st.s[i]);
}

void main()
{
	int ele,ch;
	st.top=-1;
	do
	{
		printf("1.push\n2.pop\n3.disp\n4.exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				if(stkfull())
					printf("stack is full");
				else
				{
					printf("enter element to push");
					scanf("%d",&ele);
					push(ele);
				}
				break;
			case 2:
				if(stkempty())
					printf("stack is empty");
				else
				{
					ele=pop();
					printf("poped item is %d"\n,ele );
				}
				break;
			case 3:
				display();
				break;
			
			}		
	}while(ch!=4);

}



