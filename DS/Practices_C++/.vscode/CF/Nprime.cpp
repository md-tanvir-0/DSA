#include<iostream>
using namespace std;

int main()
{
    int x; cin >> x;
    cout << 2 << " ";
    for(int i = 2; i <= x; i++)
    {
        for(int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                break;
            }
            if(j == (i-1)) cout << i <<" ";
        }
    }
}