#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a, b, c; cin >> a >> b >> c;
    cout << min(min(a , b), c) << " " << max(max(a, b), c) <<'\n'; 
    
}