#include<iostream>
using namespace std;

int main()
{
    int x; cin >> x;
    for(int i = 0; i < x; i++)
    {
        long long sum = 1;
        int y;
        cin >> y;
        for(int j = 1; j <= y; j++)
        {
            sum *= j;
            
        }
        cout << sum << '\n';
    }
}