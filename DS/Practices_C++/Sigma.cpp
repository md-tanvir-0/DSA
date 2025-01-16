#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = n*n;
    int ans = 0;
    for (int i = 1; i <= count; i++)
    {
       ans += i*i+3*i-9;
    }
    cout << ans;
}