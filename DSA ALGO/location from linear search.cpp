#include <iostream>
using namespace std;

int search(int *arr, int size, int searchElement, int *index)
{
    for (int i = 0; i < size; i++)
    {
        index[i] = i;
        // count++;
        if (arr[i] == searchElement)
        {
            index[i] = i;
            // count++;
            return i;
        }
    }
    return -1;
}
int main()
{
    int size = 10, resultIndex = 0, searchElement = 0;
    int *arr = new int[size];
    int *index = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = i + 1;
        cout << "arr [" << i << "] :" << arr[i] << endl;
    }
    cout << "enter nmbr u want to search" << endl;
    cin >> searchElement;
    resultIndex = search(arr, size, searchElement, index);
    if (resultIndex == -1)
    {
        cout << "element not fount in array" << endl;
    }
    else
    {
        cout << "found at index : " << resultIndex << endl;
        cout << "index which are used : " << endl;
    }
    for (int i = 0; i <= resultIndex; i++)
    {
        cout << index[i] << ",";
    }
}
