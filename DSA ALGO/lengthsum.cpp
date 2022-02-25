//lenght
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char n[50];
	char n1[50];
	int a=0,b=0,c=0;
	cout<<"enter your name :  "	;
	cin>>n;
	cout<<"enter your F.name: ";
	cin>>n1;
	a=strlen(n);
	b=strlen(n1);
	c=a+b;
	cout<<"Total sum of both string :"<<c;
}
