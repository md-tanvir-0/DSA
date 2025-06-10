#include<iostream>
using namespace std;

int main()
{
    int a , b, c, d;
    cin >> a >> b >> c >> d;
    long long int diff = (long long int) a * b - (long long int) c * d;
    cout << "Difference = " << diff << '\n';
}