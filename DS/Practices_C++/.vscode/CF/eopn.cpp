#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int N, x, even = 0, odd = 0, pos = 0, neg = 0; cin >> N;
    for(int i = 1 ; i <= N ; i++)
    {
        cin >> x;
        if(x % 2 == 0)
        {
            even ++;
        }
        if(x % 2 != 0)
        {
            odd ++;
        }
        if(x > 0)
        {
            pos ++;
        }
        if(x < 0)
        {
            neg ++;
        }
    }
    cout << "Even: " << even << '\n';
    cout << "Odd: " << odd << '\n';
    cout << "Positive: " << pos << '\n';
    cout << "Negative: " << neg << '\n';
}