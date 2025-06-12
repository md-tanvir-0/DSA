#include<iostream>
#include <math.h> 
using namespace std;

int main()
{
    long long a, b, c, d; cin >> a >> b >> c >> d;
    if( b * log(a) >  d * log(c))
    {
       cout << "YES" <<'\n';
    }
    else
    {
       cout << "NO" << '\n';
    }
    return 0;
}