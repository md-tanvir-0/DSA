#include<iostream>
using namespace std;

#define x (a + b)
#define f (x) x * x

int main()
{
   int a = 1, b = 2;
   cout << f(x) << '\n';
   return 0;
}