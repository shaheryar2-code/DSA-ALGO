#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next , *prev,*curr;
};
node *head = NULL , *newnode  , *temp,*tail;
int len = 0, pos;



void Create_node ()
{
    newnode = new node;
    cout<<"Enter data "<<endl;
    cin>>newnode->data;
    newnode->prev = NULL;
    newnode->next = NULL;
    if (head == NULL)
    {
        head =temp = newnode;
        tail=head;
    }

    else
    {
        temp->next = newnode;
        newnode->prev = temp;
        temp = newnode;
        tail=newnode;
    }

}
void display()                   //display a node 
{
    node *trav = head ;
    while (trav != NULL)
    {
        cout<<trav->data<<"  ";
        
        trav = trav->next;
        len++;
    }
    cout<<"\nLength of the linked list "<<len<<endl;
}

//void reverseq()
void reverse()                   //display a node 
{
    node *trav = tail;
    while (trav != NULL)
    {
        cout<<trav->data<<"  ";
        
        trav = trav->prev;
        len++;
    }
    cout<<"\nLength of the linked list "<<len<<endl;
}

  
void insert_specific_pos ()                   // insertion at specific postion
{
    if(head == NULL)
    {

        cout<<"List is Empty "<<endl;
    }
    cout<<"Enter Position:"<<endl;
    cin>>pos;
    if(pos > len)
    {
        cout<<"Invalid Position :"<<endl;
    }
    else
    {
        newnode = new node;
    cout<<"Enter data :"<<endl;
    cin>>newnode->data;
    newnode->prev = NULL;
    newnode->next = NULL;
    temp = head;
    for(int i=1; i<pos ; i++)
    {
        temp = temp->next;
    }
    newnode->prev = temp;
    newnode->next = temp->next;
    temp->next = newnode;
    newnode->next->prev = newnode;

    }


}

void delete_beg()    //delete from begining
{
	struct node* temp;
	if(head==0)
	{
		cout<<"invalid"<<endl;
	}
	else{
		temp=head;
		head=head->next;
		head->prev=NULL;
	}
}
void delete_end()          //deletion from end
{
	struct node* temp=head;
	struct node* temp2;
	while(temp->next!=NULL)
	temp=temp->next;
	temp2=temp->prev;
	temp2->next=NULL;
//	return head;


	
}

void search()  //searching 
{
	struct node *temp;
	int item,i=0,flag;
	temp=head;
	if(head==NULL)
	{
		cout<<"invalid"<<endl;
		
	}
	else
	{
		cout<<"enter a number you want to search"<<endl;
		cin>>item;
		while(item!=NULL)
		{
			if(temp->data==item)
			    {
			    cout<<"Item found at location"<<i+1<<endl;
			    break;
				}
				else{
					flag=1;
				}
		}
	}
}


int main()
{
    int x;
    while (true)
    {
        cout<<"\nPress 1 to create newnode"<<endl;
        cout<<"Press 2 to display data "<<endl;
        cout<<"Press 3 to insert data at specific position "<<endl;
		cout<<"press 4 to delete from beginning"<<endl;
		cout<<"press 5 to delete from end"<<endl;
		cout<<"press 6 search linklist"<<endl;
       cout<<"press 7 to reverse doubly linklist"<<endl;
		cin>>x;
        switch (x)
        {
        case 1:
            Create_node();
            break;
        case 2:
            len = 0;
            display();
            break;
        case 3:
            insert_specific_pos ();
            break;
            
        case 4:
			delete_beg();
			break;    
		
		case 5:
			delete_end();
			break;
			
		case 6:
            
            search();
            //len=0;
            break;	
        case 7:
        	reverse();
        	break;
        default:
            cout<<"Invalid Option "<<endl;
        }
    }
}

