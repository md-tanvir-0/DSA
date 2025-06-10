#include<iostream>
using namespace std;

int main()
{
    int x; cin >> x;
    int f = x / 1000;
    if(f % 2 == 0)
    {
        cout << "EVEN";
    }
    else
    {
        cout << "ODD";
    }
}