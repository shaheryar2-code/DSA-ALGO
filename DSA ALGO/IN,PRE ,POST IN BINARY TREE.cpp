#include <iostream>
using namespace std;

struct node {
	int data;
	struct node *left, *right;
};

node* newNode(int data)
{
	node* newnode = new node;
	newnode->data = data;
	newnode->left = newnode->right = NULL;
	return newnode;
}

void printPreorder(struct node* root)
{
	if (root == NULL)
	{
		return;
	}
	cout << root->data << " ";
	printPreorder(root->left);
	printPreorder(root->right);
}

void postOrder(struct node* root)
{
	if(root==NULL)
	{
		return;
	}
	postOrder(root->left);
	postOrder(root->right);
	cout << root->data << " ";
}

void inOder(struct node* root)
{
	if(root==NULL)
	{
		return;
	}
	inOder(root->left);
	cout << root->data << " ";
	inOder(root->right);
}

int main()
{
	node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	cout << "\nPreorder traversal of binary tree is \n";
	printPreorder(root);
	cout<<endl;
	
	cout << "\nPostOrder traversal of binary tree is \n";
	postOrder(root);
	cout<<endl;
	
	cout << "\nInOder traversal of binary tree is \n";
	inOder(root);
	cout<<endl;
	
	return 0;
}
