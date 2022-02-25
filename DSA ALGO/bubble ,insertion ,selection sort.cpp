#include<iostream>		
using namespace std;

void InsertionSort(int Array[])
{
    int i, key, j;
    for (i = 1; i < 5; i++)
    {
        key = Array[i];
        j = i - 1;

        while (j >= 0 && Array[j] > key)
        {
            Array[j + 1] = Array[j];
            j = j - 1;
        }
        Array[j + 1] = key;
    }
}


void BubbleSorting(int Array[])
{
	int i=0,j=0;
	for(i=1;i<10;i++)
	{
		for(j=0;j<(10-i);j++)
		{
			if(Array[j] > Array[j+1])
			{
				swap(Array[j], Array[j+1]);
			}
		}
	}
}


void SelectionSort(int Array[])
{
	int i,j=0;
	for(i=0; i<10-1;i++)
	{
		int min=i;
		for(j=i+1;j<10;j++)
		{
			if (Array[min] > Array[j])
			{	
				min=j;
			}
		}
	    swap(Array[i],Array[min]);
	}
}





int main()
{
	int Array[10];
	int i=0;
	for(i=0;i<10;i++)
	{
		cout << "Enter any 10 random element in array " << i+1 << " : ";
		cin >> Array[i];
		cout << endl;
	}
	
	cout << "Before Sorting : " << endl;
	for(i=0;i<10;i++)
	{
		cout << "["<< Array[i] <<"]" << flush;
	}
	cout<<endl;
	
	int selection=0;
	
	cout<<endl;
	cout<<"Press 1 Bubble Sorting Method\nPress 2 Selection Sorting Method\nEnter press 3 Insertions Sorting Method " << endl;
	cin>>selection;
	switch(selection) 
	{
  		case 1:
    		BubbleSorting(Array);
    		break;
  		case 2:
    		SelectionSort(Array);
    		break;
    	case 3:
    		InsertionSort(Array);
    		break;
  		default:
    		cout<<"incorrect input";
    		return 0;
	}
	
	cout<<endl;
	cout << "After Sorting : " << endl;
	for(i=0;i<10;i++)
	{
		cout << "["<< Array[i] <<"]" << flush;
	}
	
	return 0;
}



