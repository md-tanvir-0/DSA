#include <iostream>
using namespace std;
int main()
{
    int n,a,b;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        a=i%10;
        b=i%3;

        if(a!=9 || b==0){
            continue;
            
        }
        cout << i << '\n';
    }
}