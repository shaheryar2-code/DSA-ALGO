#include <iostream>

using namespace std;

int search(int* arr,int left,int right,int element)
{
    while(left<=right)
    {
        int mid=(left+right)/2;
        // int i=0;
        // arryy[i]=mid
        if(arr[mid]==element)
           { 
               
              cout<<mid<<endl;
               
               return mid;
           }
        else if(arr[mid]<element)
           {
            //   cout<<mid<<endl;
               left=mid+1;
           }
        else
           { 
            //   cout<<mid<<endl;
               right=mid-1;
           }
           cout<<mid<<endl;
    }
    return -1;
}
int main()
{
    int size=10, searchElement=0, resultIndex=0;
    int* arr = new int[size];
    // int* arryy = new int[size];
    int num=1;
    
    for (int i=0; i<size; i++)
    {
        arr[i]=i+1;
        cout<<"Array Element["<<i<<"] :"<<i+1<<endl;
    }

    cout<<"enter nmbr u want to search :";
    cin>>searchElement;
    
    resultIndex=search(arr,0,size-1,searchElement);
    
    if(resultIndex==-1)
    {
        cout<<"Element not found!"<<endl;
    }
    else
    {
       

        cout<<"element found at index: "<<resultIndex<<endl;
    }
    return 0;
}
