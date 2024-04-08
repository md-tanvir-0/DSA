/*#include<iostream>
using namespace std;
 
int main()
{
 int arr[10]={9,5,1,8,2,3,4,6,5,0};
 arr[5]=9;
 arr[3]=7;
 cout<<arr[5]<<endl;
 cout<<arr[3]<<endl;
 
 int i;
 for(i=0;i<10;i++)
 {
 cout<<arr[i]<<' ';
 }
 cout<<endl;
 
 return 0;
}*/

#include<iostream>
#define size 10
using namespace std;
 
class Array
{
 int arr[size];
 int lastPosition;
 public:
 Array()
 {
 lastPosition = -1;
 }
 
 void insertAtFirst(int value)
 {
 if(lastPosition == size-1)
 {
 cout<<"Can't insert! Array is Full"<<endl;
 }
 else
 {
 int i;
 for(i=lastPosition; i>=0; i--)
 {
 arr[i+1]=arr[i];
 }
 
 arr[0] = value;
 lastPosition++;
 }
 }
 
 void insertAtLast(int value)
 {
 if(lastPosition == size-1)
 {
 cout<<"Can't insert! Array is Full"<<endl;
 }
 else
 {
 lastPosition++;
 arr[lastPosition] = value;
 }
 }
 
 void insertAtAnyPosition(int pos, int value)
 {
 if(lastPosition == size-1)
 {
 cout<<"Can't insert! Array is Full"<<endl;
 }
 else
 {
 if(pos<0 || pos>lastPosition)
 {
 cout<<"Wrong position! Position must be between 0 and "<<lastPosition<<endl;
 }
 else
 {
 int i;
 for(i=lastPosition; i>=pos; i--)
 {
 arr[i+1]=arr[i];
 }
 
 arr[pos] = value;
 lastPosition++; 
 }
 } 
 }
 
 void deleteAtFirst()
 {
 
 }
 
 void deleteAtLast()
 {
 
 }
 
 void deleteAtAnyPosition(int pos)
 {
 
 }
 
 void update(int oldValue, int newValue)
 {
 
 }
 
 int Search(int key)
 {
 int i;
 for(i=0;i<=lastPosition;i++)
 {
 if(arr[i]==key)
 {
 cout<<"Value found"<<endl;
 return i;
 }
 }
 cout<<"Value not found"<<endl;
 return -1;
 }
 
 void printArray()
 {
 int i;
 for(i=0;i<=lastPosition;i++)
 {
 cout<<arr[i]<<' ';
 }
 cout<<endl;
 }
};
 
int main()
{
 Array ob;
 cout<<"Insert At Last"<<endl;
 ob.insertAtLast(8);
 ob.printArray();
 ob.insertAtLast(9);
 ob.printArray();
 ob.insertAtLast(6);
 ob.printArray();
 cout<<"Insert At First"<<endl;
 ob.insertAtFirst(20);
 ob.printArray();
 ob.insertAtFirst(15);
 ob.printArray();
 ob.insertAtFirst(4);
 ob.printArray();
 cout<<"Insert At Any Position"<<endl;
 ob.insertAtAnyPosition(3,50);
 ob.printArray();
 ob.insertAtAnyPosition(1,25);
 ob.printArray(); 
 ob.insertAtAnyPosition(6,75);
 ob.printArray();
 ob.Search(50);
 ob.Search(100);
 return 0;
}