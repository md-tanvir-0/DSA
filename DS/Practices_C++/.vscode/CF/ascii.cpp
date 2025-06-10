#include<iostream>
using namespace std;

int main()
{
    char x; cin >> x;
    if((int)x >= 65 && (int)x <= 90)
    {
        cout << "ALPHA" << '\n' << "IS CAPITAL";
    }
    else if((int)x >= 97 && (int)x <= 122)
    {
        cout << "ALPHA" << '\n' << "IS SMALL";
    }
    else
    {
        cout << "IS DIGIT" << '\n';
    }
}