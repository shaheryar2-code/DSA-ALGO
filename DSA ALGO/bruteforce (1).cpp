//BRUTE FORCE
#include <iostream>
#include<string.h>
using namespace std;
char t[100],p[50];
int brute_force()
{
       int n,j,m,i;
       n=strlen(t);
       m=strlen(p);
       for(i=0;i<n;i++)
      {
             j=0;
             while(j<m && t[i+j]==p[j])
            {
                     j++;
                    if(j==m)
                            return i+1;  //pattern found
            }
      }
      return -1;  //pattern not found
}
//char t[100],p[50];
int main()
{
	//char t[100],p[50];
	int pos;
	cout<<"enter source string"<<endl;
	cin>>t;
	cout<<"enter the pattern"<<endl;
	cin>>p;
	pos=brute_force();
	if(pos==-1)
	cout<<"pattern not found "<<p;
	else
	cout<<"pattern found at index:  "<< p << pos ;
return 0;
	
}

