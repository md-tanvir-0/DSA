#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<'*';
        
    }
    for(int i=1; i<=n-2; i++){
            cout<<'\n'<<'*';
            for(int j=0; j<=n-3; j++){
            cout<<' ';
            }
            cout<<'*';


        }
        cout<<'\n';
    for(int i=1; i<=n; i++){
        cout<<'*';
        
    }
    
    return 0;
}
