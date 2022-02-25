//merge two unsorted array
#include <iostream>
using namespace std;
int main()
{
	int a[5],b[5],c[10];
	cout<<"enter 5 element in first array: "<<endl;
	for(int i=0;i<=5;i++)
{

	cin>>a[i];
}

cout<<"enter 5 element in first array: "<<endl;
	for(int i=0;i<5;i++)
{

	cin>>b[i];
}
	cout<<"array after merging "<<endl;
		for(int i=0;i<5;i++)
	{
		c[i]=a[i];
		c[i+5]=b[i];
	}
	for(int i=0;i<10;i++)
	{
		cout<<c[i]<<" ";  //for spacing
	}

	return 0;
}
	
