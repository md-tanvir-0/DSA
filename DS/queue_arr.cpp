#include<iostream>
#define size 10
using namespace std;
 
class Queue
{
 int front;
 int rear;
 int Q[size];
 public:
 Queue()
 {
 front = -1;
 rear = -1;
 }
 
 void enqueue(int value)
 {
 if(rear == size-1)
 {
 cout<<"Queue is Full"<<endl;
 }
 else
 {
 if(front == -1 && rear == -1)
 {
 front++;
 }
 
 rear++;
 Q[rear] = value;
 }
 }
 
 int dequeue()
 {
 if(front ==-1 && rear == -1)
 {
 cout<<"Queue is empty!can't delete"<<endl;
 return -1;
 }
 else
 {
 int temp;
 temp=Q[front];
 if(front == rear)
 {
 front = -1;
 rear = -1;
 }
 else
 {
 front++;
 }
 
 return temp;
 }
 return 0;
 }
 
 bool isFull()
 {
 if(rear == size -1)
 {
 return true;
 }
 
 return false;
 }
 
 bool isEmpty()
 {
 if(front ==-1 && rear ==-1)
 {
 return true;
 }
 return false;
 }
 
 int frontValue()
 {
 if(front == -1 && rear == -1)
 {
 cout<<"Queue is empty"<<endl;
 return -1;
 }
 
 return Q[front];
 }
 
 void printQueue()
 {
 int i;
 if(front==-1 && rear ==-1)
 {
 cout<<"Queue is empty"<<endl;
 }
 else
 {
 for(i=front;i<=rear;i++)
 {
 cout<<Q[i]<<" ";
 }
 cout<<endl;
 }
 }
 
};
 
int main()
{
 Queue ob;
 ob.enqueue(9);
 ob.enqueue(6);
 ob.enqueue(1);
 ob.enqueue(8);
 ob.enqueue(5);
 ob.enqueue(3);
 ob.printQueue();
 ob.dequeue();
 ob.dequeue();
 ob.printQueue();
 ob.enqueue(15);
 ob.printQueue();
 cout<<ob.frontValue()<<endl;
 return 0;
}