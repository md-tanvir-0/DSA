#include<iostream>
using namespace std;
int main ()
{
    // int n,m;
    // cin >> n >> m;
    // int mul=n/m;
    // for(int i=1; i<=mul; i++){
    //     int ans = m*i;
    //     if(ans <= n){
    //         cout << ans << '\n';
    //     }
        
    // }

    int n,m;
    cin >> n >> m;
    int mul=n/m;
    for(int i=1; i<=mul; mul--){
        int ans;
        ans = mul*m;
        cout << ans << '\n';
        
    }
    // while(mul!=0){
    //     int ans;
    //     ans = mul*m;
    //     cout << ans << '\n';
    //     mul--;
        
    // }
}