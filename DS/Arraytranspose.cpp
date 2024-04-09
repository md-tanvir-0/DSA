#include<iostream>
#define row 3
#define column 4
using namespace std;
 
int main()
{
 cout<<"Array"<<endl;
 int arr[row][column] = {{8,3,1,7}, {5,1,9,6}, {4,0,3,6}};
 
 int r,c;
 for(r=0;r<row;r++)
 {
 for(c=0;c<column;c++)
 {
 cout<<arr[r][c]<<" ";
 }
 cout<<endl;
 }
 
 cout<<"Transposed Array"<<endl;
 int transposedArray[column][row];
 //Transpose th arr and save it in the transposedArray
 //print the transposedArray
 
 
 return 0;
}