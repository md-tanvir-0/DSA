#include<iostream>
using namespace std;

int main()
{
    long long int a, b, c, d; cin >> a >> b >> c >> d;
    long long int res = ((a % 100) * (b % 100) % 100 * (c % 100) % 100 * (d % 100)) % 100;
    if(res < 10)
    {
       cout << 0 << res <<'\n';
    }
    else
    {
       cout << res << '\n';
    }
    return 0;
}