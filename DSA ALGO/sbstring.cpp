//extraction of substring
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str,substr;
	int start,endlen,len;
	cout<<"Enter a string: ";
	getline(cin,str);
	len=str.length();
	cout<<"\n Enter starting position of substring : ";
	cin>>start ;
	cout<<"\n Enter length of substring: " ;
	cin>>endlen;
	if(start > 0 && start < 30 && endlen<len )
	{
		int i=start,stopping_position;
		 cout<<"\n";
		for(int j = 0; i<len && endlen > 0; i++, j ++)
		{
			substr[j] = str[i];
			endlen--;
			stopping_position=j;
		}
		substr[stopping_position+1] = '\0';           
	
	    for(int k=0;substr[k]!='\0';k++)
	        cout<<substr[k];
	}
	else
		cout<<"Values are invalid\n";
	return 0;
}
