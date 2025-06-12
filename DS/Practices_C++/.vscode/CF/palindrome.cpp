#include<iostream>
#include <math.h> 
using namespace std;

int main()
{
    long long N; long long res = 0; cin >> N;
    long long inp = N;
    while(N > 0)
    {
        long long prod = N % 10;
        res *= 10 ;
        res += prod;
        N /= 10;
    }
    if(inp == res)
    {
        cout << res << '\n' << "YES\n";
    }
    else
    {
        cout << res << '\n' << "NO\n";
    }
}