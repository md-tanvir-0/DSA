#include<iostream>
using namespace std;

int main()
{
    int a, b, c, d; cin >> a >> b >> c >> d;
    int left = max(a, c);
    int right = min(b, d);
    if(left <= right)
    {
        cout << left << " " << right << '\n';
    }
    else
    {
        cout << "-1";
    }
    return 0;
}