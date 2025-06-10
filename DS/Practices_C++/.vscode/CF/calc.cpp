#include<iostream>
using namespace std;

int main()
{
    int x, y, sum, sub;
    long long int mul;
    cin >> x >> y;
    sum = x + y; 
    cout << x << " + " << y << " = " << sum << '\n';
    mul = (long long) x * y; 
    cout << x << " * " << y << " = " << mul << '\n';
    sub = x - y; 
    cout << x << " - " << y << " = " << sub << '\n';

}