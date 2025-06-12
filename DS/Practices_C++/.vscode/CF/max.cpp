#include<iostream>
using namespace std;

int main()
{
    int N; cin>> N;
    int Y = 0;
    for(int i = 0; i < N; i++)
    {
        long long X;
        cin >> X;
        if(X > Y)
        {
            Y = X;
        }
    }
    cout << Y << '\n';
}