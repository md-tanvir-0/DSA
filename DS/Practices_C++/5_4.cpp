#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        int space = n-i;
        int star= 2*i-1;
        for(int k=1; k<=space; k++){
            cout<<' ';
        }
        for(int j=1; j<=star ; j++){
            
            cout<<'*';
        }
       cout <<'\n';
    }
    for(int i=1; i<=n-1; i++){
        int star= 2*(n-i)-1;
        for(int k=1; k<=i; k++){
            cout<<' ';
        }
        for(int j=1; j<=star ; j++){
            
            cout<<'*';
        }
       cout <<'\n';
    }
}