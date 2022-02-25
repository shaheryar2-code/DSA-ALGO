//multiplication of two vectors
#include<iostream>
using namespace std;
void pointwisemultiplication(int A[],int B[],int n);

int main(){
	int n;
	
	cout<<"Enter size of array: "<<endl;
	cin>>n;
	
	int* vector1=new int[n];
    int* vector2=new int[n];
    double* vector3=new double[n];
    
    cout<<"Enter elements in array1:"<<endl;
    
    for(int i=0;i<n;i++){
    	cin>>vector1[i];
	}
	
	cout<<"Enter elements in array2:"<<endl;
	 
	 
    for(int j=0;j<n;j++){
    	cin>>vector2[j];
	}
	
	for(int h=0;h<n;h++){
		vector3[h]=vector1[h]*vector2[h];
	}
	
	for(int k=0;k<n;k++){
		cout<<vector3[k]<<" ";
	}
	
	 
	
	return 0;
}
