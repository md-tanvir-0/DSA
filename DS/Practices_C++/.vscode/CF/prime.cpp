#include<iostream>
using namespace std;

int main()
{
    int x; cin >> x;
    if(x == 2) cout << "YES\n";
    for(int i = 2; i < x; i++)
    {
        
        if(x % i == 0)
        {
            cout << "NO\n";
            break;
        }
        if(i == (x-1)) cout << "YES\n";
    }
}