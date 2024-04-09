/*#include<iostream>
using namespace std;
 
int main()
{
 int i=10;
 int *p=&i;
 *p = 20;
 
 cout<<i<<endl;
 cout<<*p<<endl;
 
 cout<<"---------------"<<endl;
 cout<<&i<<endl;
 cout<<&p<<endl;
 cout<<p<<endl;
 
 return 0;
}*/

#include<iostream>
using namespace std;
 
void myFunction(int *a)
{
 cout<<"i in myFunction: "<<*a<<endl;
 *a=50;
 cout<<"i in myFunction: "<<*a<<endl;
}
 
int main()
{
 int i=10;
 cout<<"i in main function: "<<i<<endl;
 myFunction(&i);
 cout<<"i in main function: "<<i<<endl;
 
 return 0;
}