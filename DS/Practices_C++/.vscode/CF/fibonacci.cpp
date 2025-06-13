#include<iostream>
using namespace std;

int main()
{
    int x; cin >> x;
    int prev1 = 0;
    int prev2 = 1;
    for(int i = 0; i < x; i++)
    {
        if(i < 2) cout << i << " ";
        else{
            int sum = prev1 + prev2;
            cout << sum << " ";
            prev1 = prev2;
            prev2 = sum;
        }
    }
}