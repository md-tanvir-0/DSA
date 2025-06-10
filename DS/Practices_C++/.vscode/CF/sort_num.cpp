#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a, b, c; cin >> a >> b >> c;
    int mi = min(min(a, b), c);
    int ma = max(max(a, b), c);
    int mid = (a + b + c) - (mi + ma);
        cout<< mi << '\n';
            cout<< mid << '\n';
                cout<< ma << '\n' << '\n';
                    cout << a << '\n';
                       cout << b << '\n';
                           cout << c << '\n';
                                return 0;
}