#include<iostream>
using namespace std;

int main()
{
    int a, b; char s; cin >> a >> s >> b;
    if (s == '>' && a > b) cout << "Right";
    else if (s == '<' && a < b) cout << "Right";
    else if (s == '=' && a == b) cout << "Right";
    else cout << "Wrong";
}