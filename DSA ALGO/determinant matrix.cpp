//determinant of 2*2 matix
#include<iostream>
using namespace std;

int main()
{
	int a[2][2],i,j,deter=0;
	cout<<"enter the number of matrix"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"enter the number in pocket["<<i<<"]["<<j<<"]";
			cin>>a[i][j];
		}
	}
	for(i=0;i<2;i++)
	{													//enter the number in pocket[0][1]4
														//enter the number in pocket[1][0]7
		for(j=0;j<2;j++)
		{
			deter=(a[0][0]*a[1][1])-(a[0][1]*a[1][0]);  //enter the number in pocket[0][0]1
														//enter the number in pocket[1][1]8
		}
	}
	cout<<"the determinant of 2*2 Matrix is:  "<<deter;
} 														
