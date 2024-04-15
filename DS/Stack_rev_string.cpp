#include<iostream>
#include<string>
#define size 20
using namespace std;
 
class Stack
{
 char s[size];
 int top;
 public:
 Stack()
 {
 top=-1;
 }
 
 void push(char value)
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
 
 char pop()
 {
 //Delete at Last
 if(top==-1)
 {
 cout<<"Stack is empty! Can't Delete"<<endl;
 return ' ';
 }
 else
 {
 char temp;
 temp=s[top];
 top--;
 return temp;
 }
 
 }
 
 char peak()
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
 Stack myStack;
 string myString = "This is a string";
 string reversedString = "";
 //Check whether a string is a palindrom or not
 //Write your code here to reverse the given string using stack
 int i;
 for(i=0;i<myString.length();i++)
 {
 myStack.push(myString[i]);
 }
 
 while (!myStack.isEmpty())
 {
 reversedString = reversedString+myStack.pop();
 }
 cout<<reversedString<<endl;
 
 //Your code end here
 cout<<"Reversed String: "<<reversedString<<endl;
 //gnirtr a si sihT
 
 return 0;
}
///////////2nd to avoid overflow////////
#include<iostream>
#include<string>
#define size 10
using namespace std;
 
class Stack
{
 char s[size];
 int top;
 public:
 Stack()
 {
 top=-1;
 }
 
 void push(char value)
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
 
 char pop()
 {
 //Delete at Last
 if(top==-1)
 {
 cout<<"Stack is empty! Can't Delete"<<endl;
 return ' ';
 }
 else
 {
 char temp;
 temp=s[top];
 top--;
 return temp;
 }
 
 }
 
 char peak()
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
 string myString = "This is a string";
 string reversedString = "";
 //Write your code here to reverse the given string using stack
 
 //Your code end here
 cout<<"Reversed String: "<<reversedString<<end;
 //gnirtr a si sihT
 
 return 0;
}
