#include<stdlib.h>


struct stack
{
	int *arr;
	int top, size;
	void init(int n)
	{
	size=n;
	arr=(int*)malloc(n*sizeof(int));
	top=-1;
	}
	void push(int item)
	{
	if(top==size-1)
	return;
	else
	arr[++top]=item;
	}
	 
};
int main()
{
	stack s1,s2;
	s1.init(2);
	
}
