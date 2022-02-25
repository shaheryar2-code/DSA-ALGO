#include <iostream>
using namespace std;
#define N 6

int queue[N];
int front=-1;
int rear =-1;
void enqueue(int x)
{
	if(rear==N-1)
	{
		cout<<"overflow";
	}
	else if(front==-1&&rear==-1)
	{
		front=rear=0;
		queue[rear]=x;
	}
	else
	{
		rear++;
		queue[rear]=x;
	}
}
void dequeue()
{
	
	if(front==-1&&rear==-1)
	{
		cout<<"overflow";
	}
	else if( front==rear)
	{
		front=rear=-1;
	}
	else
	{
		front++;
	}
}

void display()
{
	if (front==-1&&rear==-1)
	{
		cout<<"overflow";
	}
	else{
		for(int i=front;i<rear+1;i++)
		{
			cout<<queue[i]<<" \n\n";
		}
	}
}
void peek()
{
	if (front==-1&&rear==-1)
	{
		cout<<"overflow";
	}
	cout<<queue[front]<<"\tIs the peek \t\n \n";	
}
int  main()
{
	enqueue(5);
	enqueue(2);
	enqueue(3);
	dequeue();
	dequeue();
	enqueue(6);
	enqueue(3);
	display();
	peek();
	display();
	}
