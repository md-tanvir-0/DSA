#include<iostream>
using namespace std;
 
int main()
{
 int arr[5] = {9,4,1,8,3};
 
 cout<<arr<<endl;
 cout<<&arr[0]<<endl;
 cout<<&arr[1]<<endl;
 cout<<&arr[2]<<endl;
 cout<<&arr[3]<<endl;
 cout<<&arr[4]<<endl;
 
 cout<<"-------------"<<endl;
 cout<<*arr<<endl;
 cout<<*(arr+1)<<endl;
 cout<<*(arr+2)<<endl;
 cout<<*(arr+3)<<endl;
 cout<<*(arr+4)<<endl;
 
 int *p=arr;
 int i=0;
 cout<<"-------------"<<endl;
 while(i<5)
 {
 cout<<*p<<endl;
 p++;
 i++;
 }
 
/*
0x16b4cf470 
0x16b4cf474
0x16b4cf478
0x16b4cf47c
0x16b4cf480
*/
 
 return 0;
}