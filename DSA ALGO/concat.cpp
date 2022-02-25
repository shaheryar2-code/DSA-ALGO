//concat
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char n[50];
	char n1[50];

	cout<<"enter your name :  "	;
	cin>>n;
	cout<<"enter your F.name: ";
	cin>>n1;
	strcat(n,n1);

	
	cout<<"Concatination of both string :"<<n;
}
