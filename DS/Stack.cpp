#include<iostream>
#define size 10
using namespace std;
 
class Stack
{
 int s[size];
 int top;
 public:
 Stack()
 {
 top=-1;
 }
 
 void push(int value)
 {
 //Insert at least
 if(top==size-1)
 {
 cout<<"Stack is Full! Can't insert"<<endl;
 }
 else
 {
 top++;
 s[top] = value;
 }
 }
 
 int pop()
 {
 //Delete at Last
 if(top==-1)
 {
 cout<<"Stack is empty! Can't Delete"<<endl;
 return -1;
 }
 else
 {
 int temp;
 temp=s[top];
 top--;
 return temp;
 }
 
 }
 
 int peak()
 {
 //Return the top value
 if(top==-1)
 {
 cout<<"Stack is empty"<<endl;
 return -1;
 }
 else
 {
 return s[top];
 }
 return 0;
 }
 
 bool isFull()
 {
 //If stack is Full Return true otherwise return false 
 if(top==size-1)
 {
 return true;
 }
 return false;
 }
 
 bool isEmpty()
 {
 //If stack is Empty then Return true otherwise resturn false
 if(top==-1)
 {
 return true;
 }
 return false;
 }
 
 void printStack()
 {
 int i;
 for(i=0;i<=top;i++)
 {
 cout<<s[i]<<" ";
 }
 cout<<endl;
 }
};
 
int main()
{
 Stack ob;
 ob.push(5);
 ob.push(9);
 ob.push(6);
 ob.push(2);
 ob.push(1);
 ob.printStack();
 ob.pop();
 ob.printStack();
 ob.pop();
 ob.printStack();
 ob.push(7);
 ob.pop();
 ob.push(10);
 ob.printStack();
 cout<<ob.peak()<<endl;
 
 return 0;
}
