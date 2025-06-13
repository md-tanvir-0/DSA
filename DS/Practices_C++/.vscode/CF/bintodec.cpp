#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int x; cin >> x;
    for(int i = 1; i <= x; i++)
    {
       long long y; cin >> y;
        int sum = 0;
        while(y > 0)
        {
            if(y % 2 == 1)
            {
                sum += 1;
                
            }
            y /= 2;
        }
        int res = round(pow(2, sum)) - 1;
        cout << res << '\n';
    }
}