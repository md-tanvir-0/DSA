#include <iostream>
using namespace std;
 
class node
{
 public:
 int data;
 node *left;
 node *right;
};
 
class BST
{
 node *root=NULL;
 public:
 node * getRoot(){return root;}
 void setRoot(node *n){root = n;}
 
 void _insert(int value)
 {
 node *n = new node;
 n->data = value;
 n->left = NULL;
 n->right = NULL;
 
 
 if(root == NULL)
 {
 root = n;
 }
 else
 {
 node *temp = root;
 while(true)
 {
 if(temp->data == value)
 {
 break;
 }
 else if(temp->data >value)
 {
 if(temp->left == NULL)
 {
 temp->left = n;
 break;
 }
 else
 {
 temp = temp->left;
 }
 }
 else if(temp->data < value)
 {
 if(temp->right == NULL)
 {
 temp->right = n;
 break;
 }
 else
 {
 temp = temp->right;
 }
 }
 }
 }
 
 }
 
 
 bool Searching(int value)
 {
 node *temp=root;
 while(temp!=NULL)
 {
 if(temp->data == value)
 {
 cout<<"\nValue Found"<<endl;
 return true;
 }
 else if(temp->data>value)
 {
 temp = temp->left;
 }
 else if(temp->data<value)
 {
 temp = temp->right;
 }
 }
 
 cout<<"\nValue not found"<<endl;
 return false;
 }
 
 
 node * preorder(node *n)
 {
 if(n==NULL)
 {
 return NULL;
 }
 
 cout<<n->data <<", ";
 preorder(n->left);
 preorder(n->right); 
 }
 
 node * inorder(node *n)
 {
 if(n==NULL)
 {
 return NULL;
 }
 
 inorder(n->left);
 cout<<n->data <<", ";
 inorder(n->right); 
 }
 
 node * postorder(node *n)
 {
 if(n==NULL)
 {
 return NULL;
 }
 
 postorder(n->left);
 postorder(n->right); 
 cout<<n->data <<", ";
 }
 
 
 node * findMin()
 {
 if(root==NULL)
 {
 cout<<"\nBST is empty\n";
 return NULL;
 }
 
 node *temp=root;
 while(temp->left!=NULL)
 {
 temp= temp->left;
 }
 
 cout<<"\nMinimum Value = "<<temp->data<<endl;
 return temp;
 }
 
 node * findMax()
 {
 if(root==NULL)
 {
 cout<<"\nBST is empty\n";
 return NULL;
 }
 
 node *temp=root;
 while(temp->right!=NULL)
 {
 temp= temp->right;
 }
 
 cout<<"\nMaximum Value = "<<temp->data<<endl;
 return temp;
 }
 
 /* 
 node * _delete(node *n, int key)
 {
 
 }
 
*/
 
};
 
int main()
{
 int arr[] = { 9, 2, 5, 3, 8, 11, 20, 1, 4};
 BST bst; 
 
 int i;
 for(i=0; i<9; i++)
 {
 bst._insert(arr[i]);
 }
 
 bst.preorder(bst.getRoot());
 cout<<bst.Searching(100)<<endl;
 node *m = bst.findMin();
 node *n = bst.findMax();
 cout<<"\nInorder Traversal\n";
 bst.inorder(bst.getRoot());
 cout<<"\nPostorder Traversal\n";
 bst.postorder(bst.getRoot());
 
 return 0;
}