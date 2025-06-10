#include<iostream>
using namespace std;

int main()
{
    int x; cin >> x;
    int year = x / 365;
    int month = (x % 365) / 30;
    int day = (x % 365) % 30;
    cout << year << " years" << '\n';
    cout << month << " months" << '\n';
    cout << day << " days" << '\n';
}