#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int x, y;
    while(cin >> x >> y)
        {
            if(x <= 0 || y <=0) break;
            int minn = min(x, y);
            int maxx = max(x, y);
            int sum = 0;
            for (int i = minn; i <= maxx; i++)
            {
                cout << i << " ";
                sum += i;
            }
            cout << "sum =" << sum <<'\n';
        }
        return 0;
}