#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int N;
    int pass = 1999;
    while(cin >> N)
    {
       if(N == pass)
       {
        cout << "Correct\n";
        break;
       }
       else
       {
        cout << "Wrong\n";
       }
    }

}