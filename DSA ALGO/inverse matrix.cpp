#include<iostream>

using namespace std;


int main(){
float mat[2][2];
int i,j;
float determinant = 0;
cout<<"Enter elements of matrix row wise:\n";
for(i = 0; i < 2; i++){
for(j = 0; j < 2; j++){
           cin>>mat[i][j];
}
}
cout<<"\nGiven matrix is:"<<endl;
for(i = 0; i < 2; i++){
cout<<"\n";
for(j = 0; j < 2; j++)
cout<<mat[i][j]<<"\t";
}

determinant = (mat[0][0] * mat[1][1]) - (mat[1][0] * mat[0][1]);
cout<<"\n\ndeterminant: "<<determinant;
cout<<"\n\nInverse of matrix is: \n";
float temp=mat[0][0];
mat[0][0]=mat[1][1];
mat[1][1]=temp;

mat[0][1]*=-1;
mat[1][1]*=-1;

for(i = 0; i < 2; i++){
for(j = 0; j < 2; j++)

cout<<(mat[i][j]/determinant);
cout<<"\n";
}

   return 0;
}
