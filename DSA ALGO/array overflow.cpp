#include<iostream>
using namespace std;

int arr[5];

void append(int a){
	static int index;
	int len=sizeof(arr)/sizeof(arr[0]);
	if(index<len){
		arr[index]=a;
		index++;
	}
	else{
		cout<<"Array Overflow!";
		exit(0);
	}
}

int main(){
	int a;
	for(int i=0;i<8;i++){
		cout<<"Enter append value:";
		cin>>a;
		append(a);
	}
	for(int i=0;i<5;i++){
		cout<<arr[i];
	}
}
