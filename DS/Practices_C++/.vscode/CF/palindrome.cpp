#include<iostream>
#include <math.h> 
using namespace std;

int main()
{
    long long N; long long res = 0; cin >> N;
    long long inp = N;
    while(N > 0)
    {
        long long prod = N % 10;
        res *= 10 ;
        res += prod;
        N /= 10;
    }
    if(inp == res)
    {
        cout << res << '\n' << "YES\n";
    }
    else
    {
        cout << res << '\n' << "NO\n";
    }
}





// #include<iostream>
// using namespace std;

// int main()
// {
//     int x; cin >> x;
//     for(int i = 1; i <= x; i++)
//     {
//         int y; cin >> y;
//         int sum = 0;
//         int sum2 = 0;
//         while(y > 0)
//         {
//             if(y % 2 == 1)
//             {
//                 sum *= 10;
//                 sum += 1;
//                 sum2 +=1;

//             }
//             y /= 2;
//         }
//         cout << sum; '\n';
//         cout << sum2;
//     }
// }