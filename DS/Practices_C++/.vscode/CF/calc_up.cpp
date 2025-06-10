#include<iostream>
using namespace std;

int main()
{
    char S; int A, B; cin >> A >> S >> B;
    if(S == '+') cout<< A + B;
    else if(S == '-') cout<< A - B;
    else if (S == '*') cout<< A * B;
    else cout<< A / B;
}