#include<iostream>
using namespace std;
void f (int a, int &b)
{
    b += a;
    a += b;
}
int main()
{
    // int *ptr;
    // int a[5]={0, 10, 20, 30, 40};
    // ptr = a;
    // ptr += 4;
    // cout << *(ptr - 3) << '\n';
    // return 0;
    int a = 10, b = 20;
    f(a, b);
    cout << a << ' ' << b << '\n';
    return 0;
}