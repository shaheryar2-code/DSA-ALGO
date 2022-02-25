#include<iostream>
using namespace std;

int main()
{
	int s1=5;
	int s2=6;
	int i=0,j=0,k=0;
	int arr1[5]={42,54,57,62,72};
	int arr2[6]={33,42,59,84,97,98};
	int resultant[]={};
	
	
	while(i<s1 && j<s2)
	{
		if(arr1[i]<arr2[j])
		{
			resultant[k]=arr1[i];
			i++;
			k++;
		}
		else
		{
			resultant[k]=arr2[j];
			j++;
			k++;
		}
	}
	while(i<s1)
	{
		resultant[k++]=arr1[i++];
	}
	while(j<s2)
	{
		resultant[k++]=arr2[j++];
	}
	for(int w=0;w<(s1+s2);w++)
	{
		cout<<resultant[ w ];
	}
	return 0;
}
