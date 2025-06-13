#include <iostream>
using namespace std;
int main()
{
    int n, a, b, sum = 0;
    cin>> n >> a >> b;
    for(int i=1; i<=n; i++){
        int res = 0;
        int temp = i;
        while(temp > 0)
        {
            int prod = temp % 10;
            res += prod;
            temp /= 10;
        }
        if(res >= a && res <= b) sum += i;
    }
    cout << sum << '\n';
}