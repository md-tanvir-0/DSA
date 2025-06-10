#include<iostream>
#include<math.h>
using namespace std;

int main()
{
   float x, sub; cin >> x;
   int y = x;
   sub = x - y;
   if ( sub > 0)
   {
    cout << "float " << y << " " << sub;
   }
   else
   {
    cout << "int " << y;
   }
   return 0;
}