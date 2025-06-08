#include <iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[n-i-1];
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<'\n';
    }

}