#include <iostream>
using namespace std;

void merge(int arr[],int l,int mid,int r)
{
	int n1=mid-l+1;
	int n2=r-mid;
	
	int a[n1];   //temp array
	int b[n2];
	
	for(int i=0;i<n1;i++)
	{
		a[i]=arr[l+i];
		
	}
	for(int i=0;i<n2;i++)
	{
		b[i]=arr[mid+1+i];
		
	}
	int i=0;
	int j=0;
	int k=l;
	while(i<n1 &&j<n2)
	{
		if(a[i]<b[j])
		{
			arr[k]=arr[i];
			k++;i++;
		}
		else{
			arr[k]=b[j];
			
			k++;j++;
			
		}
	}
	
	while(i<n1)
	{
		arr[k]=a[i];
		k++;i++;
	}
	while(j<n2)
	{
		arr[k]=b[j];
		k++;j++;
	}
}

void mergeSort(int arr[],int l, int r)
{
	if (l<r)
	{
		int mid=(l+r)/2;
		mergeSort(arr,l,mid);
		mergeSort(arr,mid+1,r);
		
		merge(arr,l,mid,r);
	}
}
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}


int main() {
  int myarray[5];
  //int arr_size = sizeof(myarray)/sizeof(myarray[0]);
  int arr_size = 5;

  cout << "Enter 5 integers in any order: " << endl;
  for (int i = 0; i < 5; i++) {
    cin >> myarray[i];
  }
  
  mergeSort(myarray, 0, (arr_size - 1)); // mergesort(arr,left,right) called

  cout << "After Sorting" << endl;
  for (int i = 0; i < 5; i++) {
    cout << myarray[i] << " ";
  }

  return 0;
}
//Sint main()
//{
	//int arr[10];
	//cout<<"input 10 element:\n";
	//for(int i=0;i<10;i++)
	//{
//		cin >>arr[i];
///	}
	
/*	int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
  int    arr_size = sizeof(arr) / sizeof(arr[0]);
  
    cout << "Given array is \n";
    printArray(arr, arr_size);
  
    mergeSort(arr, 0, arr_size - 1);
  
    cout << "\nSorted array is \n";
    printArray(arr, arr_size);
    return 0;
}
	
/*	int arr[]={4,9,48,1,45,5,47,8,1,2};
	mergeSort(arr,0,9);
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
		
	}

	return 0;
	
}

	mergeSort()
	cout << "\nafter merging: "<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
return 0;
}

	
//}*/
