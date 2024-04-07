#include<iostream>
using namespace std;
 
int main()
{
 cout<<"Hello world"<<endl;
 int i;
 cout<<"Please input a value: ";
 cin>>i;
 cout<<"Output: "<<i<<endl;
 
 if(i>10)
 {
 cout<<"Input is greater than 10"<<endl;
 }
 else
 {
 cout<<"Input is less than or equal 10"<<endl;
 }
 
 cout<<"Printing a range of numbers: "<<endl;
 int k;
 for(k=1;k<=i;k++)
 {
 cout<<k<<endl;
 }
 
 return 0;
}
/////
#include <iostream>
using namespace std;

int main() {
  // Outer loop
  for (int i = 1; i <= 2; ++i) {
    cout << "Outer: " << i << "\n";  // Executes 2 times
    
    // Inner loop
    for (int j = 1; j <= 3; ++j) {
      cout << " Inner: " << j << "\n";  // Executes 6 times (2 * 3)
    }
  }
  return 0;
}
