#include<iostream>
using namespace std;

int main()
{
    int x, y;
    char z; cin >> z >> x;
    for(int i = 1; i <= x; i++)
        {
            cin >> y;
            for(int j = 1; j <= y; j++)
            {
                cout << z;
            }
            cout << '\n';
        }
}