#include<iostream>
using namespace std;
 

int count(int arr[], int n,int x )
{
    
	int res = 0;
    for (int i=0; i<n; i++)
        if (x == arr[i])
          res++;
    return res;
}
 

int main()
{

    int arr[] = {1,2,3,5,6,5,7,5,8 };
    int n = sizeof(arr)/sizeof(arr[0]);
   // int x = 5;
  int x;
       cout<<"enter nmbr u want to search : ";
        cin>> x;
    cout << count(arr, n, x);
 
    return 0;
}
