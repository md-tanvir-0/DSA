#include<iostream>
using namespace std;

int main()
{
    char x; int conv; cin >> x;
    if((int)x >= 65 && (int)x <= 90)
    {
        conv = (int) x + 32;
    }
    else
    {
        conv = (int) x - 32;
    }
    cout << (char) conv;
}