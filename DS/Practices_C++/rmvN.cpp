#include <iostream>
using namespace std;
int main(){
    long long n;
    cin >> n;
    int k;
    cin >> k;
    long long mod =1;
    for (int i=0; i<k; i++){
        mod *= 10;
        
    }
    int ans = n/mod;
    cout << ans;
}