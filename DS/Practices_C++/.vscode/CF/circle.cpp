#include<iostream>
using namespace std;

int main()
{
    double pi = 3.141592653;
    cout.precision(9);
    double R , Area; cin >> R;
    Area = pi * (R * R);
    cout << Area << '\n';
}