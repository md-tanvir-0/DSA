#include <iostream>
using namespace std;
int main()
{
    // int n,m, i=2;
    // cin >> n >> m;
    // int ans =1;
    // for (int i=0; i<m; i++){
    //     ans *= n;

    // }
    // cout << ans;

    // for (int i=2; i<=n; i++){
    //     if(i%2==0){
    //         cout << i << '\n';
    //     }
    // }
    // while(i<=n){
    //     if(i%2==0){
    //         cout << i << '\n';
    //     }
    //     i++;
    // }

    // int n;
    // cin >> n;
    // for (int i=1; i<=n; i++){
    //     i++;
    //     cout << i << '\n';
    // }
    int n;
    cin >> n;
    int total = n/2;
    for (int i=1; i<=total; i++){
        cout << i*2 << '\n';
    }

    
}