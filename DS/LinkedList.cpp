#include<iostream>
using namespace std;
 
class node
{
 public:
 int data;
 node *next;
};
 
class LinkedList
{
 node *head;
 public:
 LinkedList()
 {
 head=NULL;
 }
 
 void insertAtFirst(int value)
 {
 node *n=new node;
 n->data = value;
 n->next = head;
 head = n;
 }
 
 void insertAtLast(int value)
 {
 node *n=new node;
 n->data = value;
 n->next = NULL;
 
 if(head == NULL)
 {
 head = n;
 }
 else
 {
 node * currentNode=head;
 while(currentNode->next!=NULL)
 {
 currentNode=currentNode->next;
 }
 currentNode->next = n;
 }
 }
 
 void insertAtAnyPosition(int value, int pos)
 {
 if(pos<0 || pos>=Count()-1)
 {
 cout<<"Error::Wrong Position Inserted"<<endl;
 }
 else
 {
 node *n=new node;
 n->data = value;
 
 int i;
 node * currentNode=head;
 for(i=0;i<pos-1;i++)
 {
 currentNode = currentNode->next;
 }
 
 n->next = currentNode->next;
 currentNode->next = n;
 }
 }
 
 void deleteFirst()
 {
 
 }
 
 void deleteLast()
 {
 
 }
 
 void deleteAtAnyPosition(int pos)
 {
 
 }
 
 void Remove(int value)
 {
 
 }
 
 int Count()
 {
 node *currentNode=head;
 int c = 0;
 while(currentNode!=NULL)
 {
 currentNode=currentNode->next;
 c++;
 }
 
 return c;
 }
 
 void printList()
 {
 node *currentNode=head;
 while(currentNode!=NULL)
 {
 cout<<currentNode->data<<" ";
 currentNode=currentNode->next;
 }
 cout<<endl;
 
 }
};
 
int main()
{
 LinkedList myList;
 cout<<"*****Insert At First******"<<endl;
 myList.insertAtFirst(9);
 myList.printList();
 myList.insertAtFirst(6);
 myList.printList();
 myList.insertAtFirst(2);
 myList.printList();
 myList.insertAtFirst(8);
 myList.printList();
 cout<<"*****Insert At Last******"<<endl;
 myList.insertAtLast(2);
 myList.printList();
 myList.insertAtLast(18);
 myList.printList();
 cout<<"*****Insert At Any Position******"<<endl;
 myList.insertAtAnyPosition(60, 2);
 myList.printList();
 myList.insertAtAnyPosition(80, 1);
 myList.printList();
 
 return 0;
}