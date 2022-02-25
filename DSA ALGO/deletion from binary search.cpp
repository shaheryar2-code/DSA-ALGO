#include <iostream>
using namespace std;
//funtion
void deletion(int* Array, int length, int num)
{
    int i;
    for (i=num-1; i<(length-1); i++)
	{
        Array[i]= Array[i+1];
    }
}

void ArrayPrint(int* Array,int length)
{
    for(int i=0; i<length-1; ++i)
    {
    	cout<<"Element at ["<<i+1<<"]: "<<Array[i]<<endl;
	}
}

int main ()
{
    int num;
    int length=10;
    int Array[10]={11,22,33,36,45,52,57,60, 64,78};
    for (int i= 0; i<10; i++)
	{
        cout<<"Element at ["<<i+1<<"]: "<<Array[i]<<endl;
    }
    cout<<"Enter the  number: \n"<<endl;
    cin>>num;
    deletion(Array, length, num);
    ArrayPrint(Array,length);
    
    return 0;
}
