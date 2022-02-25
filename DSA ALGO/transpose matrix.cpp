//transpose of matrix
#include <iostream>
using namespace std;

void TransposeOf(int arr[3][3],int b[3][3])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			b[i][j]=arr[j][i];
		}
	}
}

int main()
{
	int arr[3][3]={
				1,1,1,
				2,2,2,
				3,3,3
				};
	
	int b[3][3];
	TransposeOf(arr,b);
	for(int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		cout<<b[i][j]<<" ";
		cout<<endl;
	}
	
	
	
	}	
