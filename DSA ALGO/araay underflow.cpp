#include <iostream>

using namespace std;
int *createArray(int size)
{
    int *arr= new int[size];
    for(int i = 0; i<size;++i){
        arr[i] = 0;
        return arr;
    }
    
}
void deleteFrom(int *arr, int size, int index)
{
int i=0;
for (i=index; i<size - 1 ;i++)
{
arr[i]= arr[i + 1];
}

}
void printArray(int *arr , int size){
    
    for(int i=0;i<size;++i)
    {
        std::cout<<"arr ["<<i<<"]= " <<arr[i] <<std::endl;
    }
}
    
int main(){


//creating array
int size=0, index = 0,value=0;
char ch;

std::cout<<"Enter size of array:";
std::cin>>size;
int *arr = createArray(size);

printArray(arr,size);



do{
std::cout<<"Enter index you want to delete element at:";
std::cin>>index;
std::cout<<std::endl;
if(index > size || index <=0  )
{
    std::cout<<" underflow error occurs"<<std::endl;
    
}

deleteFrom(arr,size,index);

std::cout<<"Array after deletion"<<std::endl;

printArray(arr,size);

std::cout<<"Wish to delete again?(y/n): ";
std::cin>>ch;
}
    

while(ch!='n');

return 0;
}
