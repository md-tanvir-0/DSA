#include<iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    for(int i = 1; i <= x; i++)
        {
            long long y;
            cin >> y;
            if (y == 0) cout << 0 ;
                while(y > 0)
                {
                    long long prod = y % 10;
                    if(prod == 0) cout << 0 << " ";
                    else cout << prod << " ";
                    y /= 10;
                }
            cout << '\n';
        }
}