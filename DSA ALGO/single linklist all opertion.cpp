#include<iostream>
#include<string>
using namespace std;

struct node
{
	int nodeNum;
	int rollnum;
	node *next;
};


node* create(int nodeNum)
{
	node *n;
	int number;
	
	cout << "Node Number : " << nodeNum <<endl;
	cout << "Enter Roll number of student : ";
	cin>>number;
	cout<<endl;

	n=new node;
	n->nodeNum=nodeNum;
	n->rollnum=number;
	return n;
}

node* InsertAtFirst(node *head,int nodeNum)
{
	node *n;
	int number;

	if(head==NULL)
	{
		cout << "The list is empty." <<endl;
	}	
	cout << "Enter the data for the node to be inserted at the starting point." <<endl;
	cout << "Enter Roll number of student : ";
	cin>>number;
	cout<<endl;
	
	n=new node;
	n->nodeNum=nodeNum;
	n->rollnum=number;
	n->next=head;
	head=n;
	return head;
}

void InsertAtLast(node *t,int nodeNum)
{
	node *n;
	int number;
	
	cout << "Enter the data for the node to be inserted at the ending point." <<endl;
	cout << "Enter Roll number of students : ";
	cin>>number;
	cout<<endl;
	
	n=new node;
	n->nodeNum=nodeNum;
	n->rollnum=number;
	t->next=n;
	n->next=NULL;
}

void Print(node *head)
{
	node *P;
	P=head;
	
	if(head==NULL)
	{
		cout << "The list is empty" <<endl;
	}
	while(P!=NULL)
	{
		cout << "Node Number : " <<P->nodeNum <<endl;
		cout << "Roll number of student is : " <<  P->rollnum<<endl;
		P=P->next;
	}
}

node* DeleteAtPosition(node *head)
{
	int position=3;
	node *P=head->next;
	node *q=head;
	
	cout<<endl;
	cout << endl << "Node to be deleted from 3rd position";
	cout<<endl;
	
	if(head==NULL)
	{
		cout << "The list is empty." <<endl;
	}
	
	else
	{
		while(P!=NULL)
		{
			if(position==P->nodeNum)
			{
				q->next=q->next->next;  //current.next<- current.next.next
				delete(P);
				cout << "The node has been deleted." <<endl;
				return head;
			}
			else if(position==1)
			{
				head=P;
				delete(q);
				cout << "The node has been deleted." <<endl;
				return head;
			}
			else
			{
				P=P->next;
				q=q->next;
			}
		}
		cout << "The node to be deleted was not found." <<endl;
	}
	return head;
}

void search(node *head)
{
	int nNum;
	node *P=head;
	
	cout<<endl;
	cout << "Enter the Node number which you want to search : ";
	cin>>nNum;
	cout<<endl;
	
	while(P!=NULL)
	{
		if(nNum==P->nodeNum)
		{
			cout<< "The Node has been found!!!" <<endl;
			cout << "Node Number : " <<P->nodeNum <<endl;
			cout << "Roll number of student : " <<  P->rollnum<<endl;
			break;
		}
		else
		{
			P=P->next;
		}
	}
	
	if(P==NULL)
	{
		cout << "The node was not found." <<endl;
	}
}

int main()
{
	node *n=NULL;
	node *t=NULL;
	node *h=NULL;
	node *P;
	P=h;
	int nodes,i;

		// CREATION
	cout << "Enter the number of nodes to create : ";
	cin>>nodes;
	cout<<endl;
	
	for(i=1;i<=nodes;i++)
	{
		if(h==NULL)
		{
			n=create(i);
			t=n;
			h=n;	
		}
		else
		{
			n=create(i);
			t->next=n;
			t=t->next;
		}
	}
	n->next=NULL;
	
		// INSERTION 
	h=InsertAtFirst(h,(i-nodes)-1);
	InsertAtLast(t,nodes+1);
	Print(h);

		// DELETION
	h=DeleteAtPosition(h);
	cout << "The nodes after deletion." <<endl;
	cout<<endl;
	Print(h);
	search(h);
	
	return 0;
}

