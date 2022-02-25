#include <iostream>
using namespace std;

struct node{
	int data;
	int priority;
	node *next;
};

node *head = NULL; 
node *newnode = NULL;
node *temp = NULL;
node *rear = 0;
node *front= 0;


void display(node *head)
{
	node *P;
	P=head;
	while(P!=NULL)
	{
		cout << "data for node = "<<  P->data<<endl;
		P=P->next;
    }	
}

void enQueue(int value,int p)
{
	newnode = new node;
    newnode->data=value;
    newnode->priority=p;
    newnode->next=NULL;
    // If head is null, this is the first node to be added
    // so make head = newNode
    if (head == NULL) {
        head = newnode;
        return;
    }
    
    node *temp = head;
    node *prev = NULL;
    
    // search for first node having priority less than p
    while (temp != NULL && temp->priority > p) 
	{
        prev = temp;
        temp = temp->next;
    }
    
    if (temp == NULL) 
	{
        // no node with priority less than this node (Case 1)
        prev->next = newnode;
    } 
    
	else 
	{
        if (prev == NULL) 
		{
            // all the nodes have priority less than p (Case 2)
            // add this node at the starting
            newnode->next = head;
            head = newnode;
        } 
		else 
		{
            // Case 3
            // add this node before the node with priority less than p
            newnode->next = temp;
            prev->next = newnode;
        }
    }
}

int main()
{
	cout<<"Following opertion will be perfomed automatically"<<endl;	
	enQueue(5,3);
	enQueue(2,5);
	enQueue(3,2);
	enQueue(6,1);
	enQueue(4,4);
	display(head);
	return 0;
}
