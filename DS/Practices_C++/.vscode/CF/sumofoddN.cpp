#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n; cin >> n;
    for(int j = 1; j <= n; j++)
    {
        int x, y; cin >> x >> y;
        int minn = min(x, y);
        int maxx = max(x, y);
        int sum = 0;
        for (int i = minn+1; i <= maxx-1; i++)
        {
            if(i % 2 != 0) sum += i;
        }
        cout << sum <<'\n';
    }
    return 0;
}