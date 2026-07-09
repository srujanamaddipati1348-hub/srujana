#include<stdio.h>
#include<stdlib.h>
#define max 5
int queue[max];
int front = -1,rear = -1;
void enqueue()
{
	int value;
	printf("Enter value :");
	scanf("%d",&value);
	if((rear+1)%max==front)
	{
		printf("Queue is full\n");
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}
		rear = (rear=+1)%max;
		queue[rear]=value;
		printf("Inserted:%d\n",value);
	}
}
void dequeue()
{
	if(front==-1)
	{
		printf("Queue is empty\n");
	}
	else
	{
		printf("Deleted : %d\n",queue[front]);
		if(front==rear)
		{
			front=rear=-1;
		}
		else
		{
		front=(front+1)%max;
	    }
	}
}
void display()
{
	if(front==-1)
	{
		printf("Queue is empty\n");
	}
	else
	{
		int i=front;
		printf("Queue elements");
		while(1)
		{
			printf("%d",queue[1]);
			if(i==rear)
			break;
			i=(i+1)%max;
		}
		printf("\n");
	}
}
main()
{
	int choice,value;
	while(1)
	{
		printf("\n 1.ENQUEUE\n2.DEQUEUE\n3.DISPPLAY\n4.exit\n");
		printf("Enter choice:");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:enqueue();break;
			case 2:dequeue();break;
			case 3:display();break;
			case 4:exit(0);break;
			deafault:printf("Invalid choice\n");
		}
	}
}

