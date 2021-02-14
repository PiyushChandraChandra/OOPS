#include<stdio.h>
#define size 5
int items[size];
int front =-1, rear=-1;
int isfull()
{
	if((front==rear+1)||(front==0&&rear==size-1)) return 1;
	return 0;
}
int isempty()
{
	if(front==-1)return 1;
	return 0;
}
void enqueue(int element)
{
	if(isfull())
	printf("Queue is full!!");
	else
	{
		if(front==-1)
		front=0;
		rear=(rear+1)%size;
		items[rear]=element;
		printf("\n Inserted->%d",element);
	}
}
int dequeue()
{
	int element;
	if(isempty())
	{
		printf("Queue is empty!!");
		return(-1);
	}
	else
	{
		element =items[front];
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front=(front+1)%size;
		}
		printf("\nDeleted element->%d \n",element);
		return(element);
	}
}

void display()
{
	int i;
	if(isempty())
	printf("\n Empty queue");
	else
	{
		printf("\n front->%d",front);
		printf("\n items->");
		for(i=front;i!=rear;i=(i+1)%size)
		{
			printf("%d",items[i]);
		}
		printf("%d",items[i]);
		printf("\nrear->%d\n",rear);
	}
}
int main()
{
	dequeue();
	
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);
	enqueue(6);
	display();
	dequeue();
	display();
	enqueue(7);
	display();
	enqueue(8);
	return 0;
}
