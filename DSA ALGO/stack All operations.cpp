#include <iostream>
using namespace std;

int top=-1,z[5];
void push(int value)
{
	if (top==4)
	{
		cout<<"overflow"<<endl;
		
	}
	else
	{
		top++;
		z[top]=value;
		
	}
}
void pop()
{
	if (top==-1)
	{
		cout<<"overflow"<<endl;
		
	}
	else{
		top--;
	}
}
void display()
{
	if(top==-1)
	{
		cout<<"nothing to display: \n";
		
	}
	else{
		cout<<"array is :   \n\n\n";
		for (int i=0;i<=top;i++)
		{
			cout<<"\t"<<z[i];
		}
	}
}

void peek()
{
	if(top==-1)
	{
		cout<<"stack is empty"<<endl;
		
	}
	else{
	
	cout<<z[top]<<endl;
}
}

int main()
{
	int value,choice;
	do{
		cout<<"\n1.PUSH\n2.POP\n3.DISPLAY\n4.peek\n5.Exit\nInput choice:";
		cin>>choice;
		system("cls");
		if(choice==1)
		{
			cout<<"\nenter value: ";
			cin>>value;
			push(value);
		}
		if(choice==2)
		{
			pop();
		}
		if(choice==3)
		{
			display();
		}
		if (choice==4)
		{
			peek();
		}
		
	}
	while(choice!=5);
	cout<<"exit";
	//getch();
	return 0;
}


